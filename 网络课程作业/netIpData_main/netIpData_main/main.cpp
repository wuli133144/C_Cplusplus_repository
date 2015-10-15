#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace  std;
/***************************************************

Copyright (C) 2015 - edited by jackwu All Rights Reserved.
-----------------------------------------------------
��ǰ�汾 : 1.0
��     ��: jackwu
ʱ     ��: 2015-06-14 08:51:50
ע     ��:Ϊip���ݱ����֡ ������Ĵ󲿷���������ҵ��˵��

****************************************************/
void main(int argc,char*argv[])
{
	//������������в���ȷ���������ʾ���˳���
	if(argc!=3)
	{
		cout<<endl<<"�밴���¸�ʽ���룺framer inputfile outputfile"<<endl;
		exit(0);
	}

	//��ָ��������ļ����Զ����Ʒ�ʽ�򿪲��ɶ���д�����ļ����ڣ�����������ݡ�

	fstream file(argv[2],ios::out|ios::in|ios::binary|ios::trunc,0); 

	for(int i=0;i<7;i++)
		file.put((char)0xaa);
	file.put((char)0xab);//д��B��ǰ�����B��֡ǰ�������

	char des_add[]={char(0x00),char(0x00),char(0xE4),char(0x86),char(0x3A),char(0xDC)};
	file.write(des_add,6);//д��B��Ŀ�ĵ�ַ��

	char sor_add[]={char(0x00),char(0x00),char(0x80),char(0x1A),char(0xE6),char(0x65)};
	file.write(sor_add,6);//д��B��Դ��ַ��

	//���������ļ�������ָ���������ļ����Զ����Ʒ�ʽ�򿪲��ɶ���

	ifstream infile(argv[1],ios::in|ios::binary,0); 

	int length=0;
	infile.seekg(0,ios::end);//����ָ���Ƶ��ļ�ĩβ��
	 length=infile.tellg();//����ָ��ƫ��������Ϊ�����ļ��ĳ��ȡ�
    char* data=new  char[length];//�����ַ�ָ�벢�����ļ����ȳ�ʼ����
	infile.seekg(0,ios::beg);//����ָ���Ƶ��ļ���ʼ��
	infile.read(data,length);//���ļ����ݶ��뵽�ַ�ָ��data�С�
	file.put(char(length>>8));
	file.put(char(length&0xff));//���ļ�����ֵ��������д�뵽����ļ��ĳ����ֶ��С�
	file.write(data,length);//��data����д�뵽����ļ��С�

	//��������ļ����Ȳ���B�����ò���B��

	if(length<46)
	{
		for(int j=length;j<46;j++)
			file.put(char(0x00));
	}

	file.put(char(0x00));//�������ֶκ���Ӹ�
	file.seekg(8,ios::beg);//����ָ��ָ��Ŀ�ĵ�ַ�ֶΣ��Ӵ˴���ʼCRC����
    char ch;//ch�������������ַ���
	unsigned char crc=char(0x00);//������ʼֵΪ��

	while(1)//����CRC����
	{
		file.get(ch);
		//file.get(&ch,1);
		if(ch==0xff)//�ж��Ƿ����ļ���β������ǣ����˳�ѭ����
			break;

		for(int i=0;i<8;i++)//���������ַ���λ�ֱ���
		{
			if(0x80==(crc&(0x80)))//��ǰ�������λΪ����Ҫ���г������㡣
			{
				crc=(crc<<1)&(0xff);//crc����λ�����λ����
				crc=crc|((ch&0x80)>>7);//������������Ӧ��ֵ�ݲ�������ĩλ��
				crc=crc^(0x07);//���г������㣬��������ĵ�λ�����
			}
			else//��ǰ���������λΪ������Ҫ���г������㡣
			{
				crc=(crc<<1)&(0xff);//crc����λ�����λ����
				crc=crc|((ch&0x80)>>7);//������������Ӧλ��ֵ�ݲ�������ĩλ��
			}
			ch=ch<<1;//�������ַ�����λ��ʹ������һλ��Ϊ����λ��
		}
	}

	file.clear();
	file.seekp(-1,ios::end);//��дָ���Ƶ�����ļ������
	file.put(crc);//д��crc�롣

	file.close();
	infile.close();//�ر������ļ�������ļ���

	cout<<endl<<"����֡�ļ�"<<argv[2]<<" ��װ���"<<endl;
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