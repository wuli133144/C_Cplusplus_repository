
#include "STUDENT_SYS_GOTOXY.h"
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"STUDENT.h"
#include "STUDENT_LIST.h"

void Menu()
{   
	char cur;
	gotoxy(20,8);
	printf("#############################");
	
	gotoxy(18,9);
	printf(" ");
	gotoxy(20,10);
	printf("欢迎使用学生消费信息管理系统");
	gotoxy(18,12);
	printf(" ");
	gotoxy(20,13);
	printf("#############################");
	gotoxy(20,14);
	printf("#按任意键开始 ESC退出");
	//_getch();
	fflush(stdin);
	while(1){
		if(_kbhit())
		{       
			cur=_getch();
			if(cur==27)
			{
				Func_Esc();
			}
			else
			{   
				//开始
				MainMenu();
				Chose();
			}
		}
	}

}


//主菜单
/********************************************************************
 Copyright (C), 2015-2016,
 FunctonName:MainMenu
 Description:
 Parameter: void
 Returns: void
 Access: NULLNULLNULL
 Author: JACKWU
 Created: 2015/09/14
 history: 14:9:2015 11:42 byJACKWU
*********************************************************************/

void MainMenu()
{
	system("cls");
	gotoxy(18,5);
	printf("功能选择(0-8)");
	gotoxy(19,6);
	printf("0,创建学生消费记录");
	gotoxy(19,7);
	printf("1,加载学生消费信息");
	gotoxy(19,8);
	printf("2,查找学生的信息");
	gotoxy(19,9);
	printf("3,删除学生的信息");
	gotoxy(19,10);
	printf("4,增加学生的信息");
	gotoxy(19,11);
	printf("5,遍历学生的信息");
	gotoxy(19,12);
	printf("6,保存学生的信息");

	gotoxy(19,13);
	printf("7,退出");
	gotoxy(19,14);
	printf("-------------------------------");
	gotoxy(19,15);
	printf("chose(0-7)");


}
/********************************************************************
 Copyright (C), 2015-2016,
 FunctonName:Func_Esc
 Description:退出
 Parameter: void
 Returns: void
 Access: nullnull
 Author: jackwu
 Created: 2015/09/14
 history: 14:9:2015 11:42 by
*********************************************************************/	
void Func_Esc()
{   
	
	char key='#';
	char cur;
	system("cls");
	gotoxy(18,9);
	printf("###################");
	gotoxy(18,10);
	printf("你确定退出么？(y/n)");
	gotoxy(18,11);
	printf("###################");
	gotoxy(18,12);

	
	while(key!='y'&&key!='N'&&key!='Y'&&key!='n')
	{       
		cur=_getch();
		if(cur=='y'||cur=='Y')
		{
	          exit(0);
		}
		else
		{     
			system("cls");
	          Menu();
		}
	}

}
	/********************************************************************
	 Copyright (C), 2015-2016,
	 FunctonName:Chose
	 Description:选项
	 Parameter: void
	 Returns: void
	 Access: nullnullnull
	 Author: jackwu
	 Created: 2015/09/14
	 history: 14:9:2015 11:43 byjackwu
	*********************************************************************/
void Chose()
{
	int i;
	char key='#';
	scanf_s("%d",&i);
	switch(i)
	{
	case 0:
		{
		 //创建
			//_head=Create_Student_List();//创建链表成功
			_head=Create_Student_List();
			//_head->name=NULL;
			//_head->num=NULL;
			system("cls");
			gotoxy(18,10);
			printf("创建成功!");
			gotoxy(18,11);
			printf("按esc键返回");
			fflush(stdin);
			while(1)
			{    ////
				if(_kbhit())
				{
					key=_getch();
					if(key==27)
					{
						Func_Esc();
					}
					else
					{  
						system("cls");
						MainMenu();
						break;
					}
				}
				///
			}
			break;
		
		}
	case 1:
		{
			//加载学生的信息
			FILE *fp;
			//char name[10];
			//char num[10];
			char xiaofei[30];
		    
			if((fp=fopen("student.txt","r"))!=NULL)
				while(feof(fp)!=EOF)
				{
				   // fscanf_s(fp,"%s,%s,%s\n",name,num,xiaofei);
					//fwrite(p,sizeof(struct _student_),1,fp);
					//fscanf_s(fp,"姓名：%s",p->name);
					fgets(xiaofei,1,fp);
					//printf("%s\n%s\n%s\n",name,num,xiaofei);
					printf("%s\n",xiaofei);


				}
			fclose(fp);
			break;
	
		}
	case 2:
		{
			//查找
			char num[10];
			int tag;
			memset(num,'\0',sizeof(num));
		
			printf("输入学生的学号:");
			//scanf_s("%s",num);
			fflush(stdin);
			gets(num);
			system("cls");
			tag=find_element(_head,num);
			if(tag)
			{   
				//system("cls");
		        printf("查找成功！\n");
				gotoxy(18,9);
				printf("按esc键返回");
				fflush(stdin);
				while(1)
				{
					if(_kbhit())
					{
						key=_getch();
						if(key==27)
						{
							Func_Esc();
						}
						else
						{  
							system("cls");
							MainMenu();
							break;
						}
					}
				}
			}
			break;

		}
	case 3:
		{
			//删除
			char num[10];
			int tag;
			memset(num,'\0',sizeof(num));

			printf("输入学生的学号:");
			//scanf_s("%s",num);
			fflush(stdin);
			gets(num);
			system("cls");
			if(del_list(_head,num))
			{
		          printf("删除成功！\n");
				  gotoxy(18,9);
				  printf("按esc键返回");
				  fflush(stdin);
				  while(1)
				  {
					  if(_kbhit())
					  {
						  key=_getch();
						  if(key==27)
						  {
							  Func_Esc();
						  }
						  else
						  {  
							  system("cls");
							  MainMenu();
							  break;
						  }
					  }
				  }
			}
			break;
		}
	case 4:
		{
			//增加学生的信息
			pzstudent p=Create_Student();

			if(Add(_head,*p))
			{  
                system("cls");
				gotoxy(18,8);
				printf("添加学生的信息成功！");
				gotoxy(18,9);
				printf("按esc键返回");
				fflush(stdin);
				while(1)
				{
					if(_kbhit())
					{
						key=_getch();
						if(key==27)
						{
							Func_Esc();
						}
						else
						{  
							system("cls");
							MainMenu();
							break;
						}
					}
				}

			}
			break;
		}
	case 5:
		{
			//遍历信息
			system("cls");
			Printf_StudentInfo(_head);
			gotoxy(18,11);
			printf("按esc键返回");
			fflush(stdin);
			while(1)
			{
				if(_kbhit())
				{
					key=_getch();
					if(key==27)
					{
						Func_Esc();
					}
					else
					{  
						system("cls");
						MainMenu();
						break;
					}
				}
			}
		}
	case 6:
		{
			//保存学生的信息
			FILE *fp;
			pzstudent p,q;
			p=_head->next;
			if(!(fp=fopen("student.txt","w+")))
			{
			 printf("cant open file");
			 exit(0);
			}
			while(p->next)
			{
			        fprintf(fp,"姓名：%s,学号：%s,消费：%d\n",p->name,p->num,p->xiaofei);
					p=p->next;
			}
			fprintf(fp,"姓名：%s,学号：%s,消费：%d\n",p->name,p->num,p->xiaofei);

			fclose(fp);
			system("cls");
			printf("保存学生的信息成功！");
			gotoxy(18,9);
			printf("按esc键返回");
			fflush(stdin);
			while(1)
			{
				if(_kbhit())
				{
					key=_getch();
					if(key==27)
					{
						Func_Esc();
					}
					else
					{  
						system("cls");
						MainMenu();
						break;
					}
				}
			}
			break;

		}
	case 7:
		{
			Func_Esc();
			break;
		}
	default:
		{
			break;
		}
		

	}
}

//创建链表

extern pzstudent Create_Student_List()
{
	pzstudent temhead;
	int i,j;
	temhead=NULL;
	temhead=(pzstudent)malloc(LEN);
	temhead->next=NULL;
	temhead->name=NULL;
	temhead->num=NULL;
	return temhead;
	//while()
	//if(temhead)
}

//创建学生
pzstudent Create_Student()
{
	char name[10];
	char num[10];
	int xiaofei=0;
	pzstudent p=(pzstudent)malloc(sizeof(LEN));
	p->name=(char *)malloc(sizeof(char));
	p->num=(char *)malloc(sizeof(char));
	printf("请输入学生的学号:");
	//scanf_s("%s",num);
	fflush(stdin);
	gets(num);
	printf("请输入学生的姓名：");
	//scanf_s("%s",name);
	fflush(stdin);
	gets(name);
	printf("请输入学生的消费");
	scanf_s("%d",&xiaofei);
	strcpy(p->name,name);
	strcpy(p->num,num);
	p->xiaofei=xiaofei;
	p->next=NULL;
	return p;

}

int Add(pzstudent head,m_student stu)
{
   pzstudent p;
   if(head->next==NULL)
   {
	   if((p=(pzstudent)malloc(sizeof(LEN))))
	   {
		   p->name=(char *)malloc(sizeof(char)*strlen(stu.name));
		   p->name=stu.name;

		   p->next=NULL;
		   p->num=(char *)malloc(sizeof(char)*strlen(stu.num));

		   p->num=stu.num;
		   p->xiaofei=stu.xiaofei;

		   _head->next=p;
		   _stu=p;
		 
	   }
 }
   else 
   {
	   if((p=(pzstudent)malloc(sizeof(LEN))))
	   {
		   p->name=(char *)malloc(sizeof(char)*strlen(stu.name));
		   p->name=stu.name;

		   p->next=NULL;
		   p->num=(char *)malloc(sizeof(char)*strlen(stu.num));

		   p->num=stu.num;
		   p->xiaofei=stu.xiaofei;

		   _stu->next=p;
		   _stu=p;
		 }
	return 1; 
 }
}
void Printf_StudentInfo(pzstudent head)
{
	pzstudent p,q;
	p=head->next;
	//system("cls");
	while(p->next!=NULL)
	{   printf("*****************\n");
		printf("学号:%s\n",p->num);
		printf("姓名:%s\n",p->name);
		printf("消费额:%d\n",p->xiaofei);
	    //printf("学号:%s\n",p->num);
		p=p->next;
		printf("*****************\n");
	}
	//printf()
	printf("学号:%s\n",p->num);
	printf("姓名:%s\n",p->name);
	printf("消费额:%d\n",p->xiaofei);
	//printf("学号:%s\n",p->num);
}

//查找
int find_element(pzstudent head,char *num)
{
	pzstudent p;
	p=head->next;
	while(!strcmp(num,p->num)&&p->next)
	{
             p=p->next;
	}
	if(!strcmp(num,p->num))
	{
		printf("学号：%s\n",p->num);
		printf("姓名：%s\n",p->name);
		printf("消费：%d\n",p->xiaofei);
		return 1;

	}
	else
		return 0;
}

//删除指定的元素
int del_list(pzstudent head,char *num){
	pzstudent p,q;
	q=p=head->next;
	while(p->next&&!strcmp(num,p->num))
	{   q=p;
		p=p->next;
	}
	if(p->next==NULL)
	{
         head->next=NULL;
		// free(p);
		 return 1;
	}
	else if(!strcmp(num,p->num)&&p->next!=NULL)
	{
		q->next=p->next;
		free(p);
		p=NULL;
		return 1;
	}
	else 
		return 0;
}