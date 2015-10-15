#include<stdio.h>
#include<string.h>
#include<cstring>

//
int mylen(const char  *str)
{    
	 int len=0;
     char *tepcharlp=str;
	 while(*tepcharlp++)
	 {
		 len++;
	 }
	 return len;
}
//
int mylen1(const char *lp)
{
	char *lptem=lp;
	while (*lptem++);
	return (lptem-lp-1);
}
//lp=null
//lp[last]='\0'

int mystrlen(const char *lp)
{
 return (*lp++==0?0:mystrlen(lp)+1);
}



int main()
{
	strlen()
//printf("jack");
	char a[]="jack";
	//int  len=sizeof(a);
	char *lp="jack12";
	//int len=strlen(lp);

	int len1=sizeof(lp);
	//char *lp=(char *)malloc(sizeof(char)*strlen(a));

    // getchar();
return 0;
}