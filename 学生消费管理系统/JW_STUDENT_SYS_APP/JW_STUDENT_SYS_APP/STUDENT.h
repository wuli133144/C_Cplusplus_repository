#ifndef  STUDENT_H
#define  STUDENT_H


#include <stdio.h>

typedef struct _student
{
	char *num;//ѧ��
	char *name;//����
	int xiaofei;//����
	struct _student *next;

} m_student,*pzstudent;
//ȫ�ֱ���
#define LEN  sizeof(struct _student)

pzstudent _head=NULL,_stu=NULL;



int i_student,j_student;



//���ܺ���
void Menu();
void MainMenu();
void Chose();
pzstudent Create_Student();

pzstudent Create_Student_List();
int Load(pzstudent head);
int Search(pzstudent head);
int Del(pzstudent head);
int Add(pzstudent head,m_student stu);

void Printf_StudentInfo(pzstudent head);//�����ڵ�

void Func_Esc();

#endif
