#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace  std;
/***************************************************

Copyright (C) 2015 - edited by jackwu All Rights Reserved.
-----------------------------------------------------
当前版本 : 1.0
作     者: jackwu
时     间: 2015-06-14 08:51:50
注     释:为ip数据报添加帧 ，代码的大部分来自做作业的说明

****************************************************/
void main(int argc,char*argv[])
{
	//如果输入命令行不正确，则输出提示后退出。
	if(argc!=3)
	{
		cout<<endl<<"请按以下格式输入：framer inputfile outputfile"<<endl;
		exit(0);
	}

	//打开指定的输出文件，以二进制方式打开并可读可写，如文件存在，则清除其内容。

	fstream file(argv[2],ios::out|ios::in|ios::binary|ios::trunc,0); 

	for(int i=0;i<7;i++)
		file.put((char)0xaa);
	file.put((char)0xab);//写入B的前导码和B的帧前定界符。

	char des_add[]={char(0x00),char(0x00),char(0xE4),char(0x86),char(0x3A),char(0xDC)};
	file.write(des_add,6);//写入B的目的地址。

	char sor_add[]={char(0x00),char(0x00),char(0x80),char(0x1A),char(0xE6),char(0x65)};
	file.write(sor_add,6);//写入B的源地址。

	//创建输入文件流并打开指定的输入文件，以二进制方式打开并可读。

	ifstream infile(argv[1],ios::in|ios::binary,0); 

	int length=0;
	infile.seekg(0,ios::end);//将读指针移到文件末尾。
	 length=infile.tellg();//计算指针偏移量，即为输入文件的长度。
    char* data=new  char[length];//创建字符指针并根据文件长度初始化。
	infile.seekg(0,ios::beg);//将读指针移到文件开始。
	infile.read(data,length);//将文件数据读入到字符指针data中。
	file.put(char(length>>8));
	file.put(char(length&0xff));//将文件长度值按照逆序写入到输出文件的长度字段中。
	file.write(data,length);//将data内容写入到输出文件中。

	//如果输入文件长度不足B，则用补足B。

	if(length<46)
	{
		for(int j=length;j<46;j++)
			file.put(char(0x00));
	}

	file.put(char(0x00));//将数据字段后添加个
	file.seekg(8,ios::beg);//将读指针指向目的地址字段，从此处开始CRC计算
    char ch;//ch用来保存读入的字符。
	unsigned char crc=char(0x00);//余数初始值为。

	while(1)//进行CRC计算
	{
		file.get(ch);
		//file.get(&ch,1);
		if(ch==0xff)//判断是否到了文件结尾，如果是，则退出循环。
			break;

		for(int i=0;i<8;i++)//对入读入的字符的位分别处理。
		{
			if(0x80==(crc&(0x80)))//当前余数最高位为，需要进行除法运算。
			{
				crc=(crc<<1)&(0xff);//crc左移位，最低位补。
				crc=crc|((ch&0x80)>>7);//将输入数据相应的值递补到余数末位。
				crc=crc^(0x07);//进行除法运算，即与除数的低位相异或。
			}
			else//当前余数的最高位为，不需要进行除法运算。
			{
				crc=(crc<<1)&(0xff);//crc左移位，最低位补。
				crc=crc|((ch&0x80)>>7);//将输入数据相应位的值递补到余数末位。
			}
			ch=ch<<1;//读到的字符左移位，使数据下一位作为输入位。
		}
	}

	file.clear();
	file.seekp(-1,ios::end);//将写指针移到输出文件的最后。
	file.put(crc);//写入crc码。

	file.close();
	infile.close();//关闭输入文件和输出文件。

	cout<<endl<<"数据帧文件"<<argv[2]<<" 封装完成"<<endl;
	system("pause");
	
}

/*
 * This file is derived from software bearing the following
 * restrictions:
 *
 * Copyright (c) 2015
 * 
 *
 * Permission to use, copy, modify, distribute and sell this
 * software and its documentation for any purpose is hereby
 * granted without fee, provided that the above copyright notice
 * appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation.
 * Hewlett-Packard Company makes no representations about the
 * suitability of this software for any purpose. It is provided
 * "as is" without express or implied warranty.
 */