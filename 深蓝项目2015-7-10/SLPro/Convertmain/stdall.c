#include"stdall.h"

void MainUi()
{   system("cls");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\t\t   ��ӭ��ʹ�þֲ��̿�����ת��ϵͳ\n\n\n");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\n\t\t\t    0,����ת��\n");
	printf_s("\t\t\t    1,��������\n");
	printf_s("\t\t\t    2,�˳�\n");
	printf_s("����������ѡ��\n");
	 select();
}
/*****************************************************
*FunCtion Name                     : select()
*Create  Date                      :2015-07-10 10:58:10
*Author/corporation                :jackwu
*Description					   :ѡ�����
*
*
*Param						   :void
*Return Value					   :
*G-v							   :
*File Static Variable			   :
*Funtion Static	Variable		   :
*File Name					   :stdall.h     


*------------------------------------------------------
*Version Histroy
*No.     Date      Revised by      Item    Description
*	    2015-07-10  jackwu
*******************************************************/
void select()
{
	int isele;//ѡ��Ĳ�����
		scanf_s("%d",&isele);
	switch(isele)
	{
	case 0:
		{  
           // ConvertNum();
			ConvertNum_UI();
			break;
		}

	case 1:
		{   

			break;
		}
	case 2:
		{   ApplicationExit();
			break;
		}
	default:
		{   
			system("cls");
			printf_s("\n\t\t\t\t�����������������\n\n");
            MainUi();
		    break;
            
		}
	}

}
/*****************************************************
*FunCtion Name                     : ApplicationExit()
*Create  Date                      :2015-07-10 11:08:38
*Author/corporation                :jackwu
*Description					   :�˳�����
*
*
*Param						   :void
*Return Value					   :
*G-v							   :
*File Static Variable			   :
*Funtion Static	Variable		   :
*File Name					   :stdall.c     


*------------------------------------------------------
*Version Histroy
*No.     Date      Revised by      Item    Description
*	    2015-07-10  jackwu
*******************************************************/
void ApplicationExit()
{
	exit(0);//�˳�
}
/*****************************************************
*FunCtion Name                     :ConvertNum
*Create  Date                      :2015-07-10 11:09:27
*Author/corporation                :jackwu
*Description					   :void
*
*
*Param						   :
*Return Value					   :
*G-v							   :
*File Static Variable			   :
*Funtion Static	Variable		   :
*File Name					   :stdall.c     


*------------------------------------------------------
*Version Histroy
*No.     Date      Revised by      Item    Description
*	    2015-07-10  jackwu
*******************************************************/

void ConvertNum()
{
	system("cls");
	system("dir /b Raw_Data");
	printf_s("��������Ҫ�������ļ�\n");

}
void ConvertNum_convert()
{
	char filename[100];
	scanf_s("%s",filename);
	//todo
	system("pause");
}

void ConvertNum_UI()
{  
	system("cls");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\t\t   ��ӭ��ʹ�þֲ��̿�����ת��ϵͳ\n\n\n");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\n\t\t\t    0,��ʾ�ɲ����ļ�\n");
	printf_s("\t\t\t    1,������һ���˵�\n");
	printf_s("\t\t\t    2,�˳�\n");
	printf_s("����������ѡ��\n");
	ConvertNum_UI_Select();

}
void ConvertNum_UI_Select()
{
	int isele;//ѡ��Ĳ�����
	scanf_s("%d",&isele);
	switch(isele)
	{
	case 0:
		{  
			//ConvertNum();
			ConvertNum();
			break;
		}

	case 1:
		{   
			MainUi();
			break;
		}
	case 2:
		{   ApplicationExit();
		break;
		}
	default:
		{   
			system("cls");
			printf_s("\n\t\t\t\t�����������������\n\n");
			 ConvertNum_UI();
			break;

		}
	}

}

