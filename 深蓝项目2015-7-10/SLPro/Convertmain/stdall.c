#include"stdall.h"

void MainUi()
{   system("cls");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\t\t   欢迎你使用局部程控码制转换系统\n\n\n");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\n\t\t\t    0,码制转换\n");
	printf_s("\t\t\t    1,数据排序\n");
	printf_s("\t\t\t    2,退出\n");
	printf_s("请输入您的选择：\n");
	 select();
}
/*****************************************************
*FunCtion Name                     : select()
*Create  Date                      :2015-07-10 10:58:10
*Author/corporation                :jackwu
*Description					   :选择操作
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
	int isele;//选择的操作号
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
			printf_s("\n\t\t\t\t输入错误！请重新输入\n\n");
            MainUi();
		    break;
            
		}
	}

}
/*****************************************************
*FunCtion Name                     : ApplicationExit()
*Create  Date                      :2015-07-10 11:08:38
*Author/corporation                :jackwu
*Description					   :退出函数
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
	exit(0);//退出
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
	printf_s("请输入您要操作的文件\n");

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
	printf_s("\t\t   欢迎你使用局部程控码制转换系统\n\n\n");
	printf_s("\t\t##############################################\n\n\n");
	printf_s("\n\t\t\t    0,显示可操作文件\n");
	printf_s("\t\t\t    1,返回上一级菜单\n");
	printf_s("\t\t\t    2,退出\n");
	printf_s("请输入您的选择：\n");
	ConvertNum_UI_Select();

}
void ConvertNum_UI_Select()
{
	int isele;//选择的操作号
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
			printf_s("\n\t\t\t\t输入错误！请重新输入\n\n");
			 ConvertNum_UI();
			break;

		}
	}

}

