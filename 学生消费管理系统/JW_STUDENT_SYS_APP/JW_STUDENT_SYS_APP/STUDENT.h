#ifndef  STUDENT_H
#define  STUDENT_H


#include <stdio.h>

typedef struct _student
{
	char *num;//学号
	char *name;//姓名
	int xiaofei;//消费
	struct _student *next;

} m_student,*pzstudent;
//全局变量
#define LEN  sizeof(struct _student)

pzstudent _head=NULL,_stu=NULL;



int i_student,j_student;



//功能函数
void Menu();
void MainMenu();
void Chose();
pzstudent Create_Student();

pzstudent Create_Student_List();
int Load(pzstudent head);
int Search(pzstudent head);
int Del(pzstudent head);
int Add(pzstudent head,m_student stu);

void Printf_StudentInfo(pzstudent head);//遍历节点

void Func_Esc();

#endif
