/*
creator:吴玉杰
time:2015/12
place:xust
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define  _type  int
#define  INT8   int

typedef struct _node{
//	INT8 
	_type data;
	struct _node * next;
}listlink,*pzlistlink;

//初始化
pzlistlink _Init_List_(void)
{
	pzlistlink head;
	//if((!head=(pzlistlink)malloc(sizeof(struct _node))))
	if(!(head=(pzlistlink)malloc(sizeof(struct _node))))
	exit(0);
	head->next=NULL;
	return head;
	//空的头节点
}
//判断是否是空节点
INT8 _isempty_list(pzlistlink head)
{   
	pzlistlink p=head;
	if(head->next==NULL)
		return 1;
	return 0;
}
//插入节点
INT8 insert_list_value(pzlistlink head,int pos,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&i<pos-1)//pos是从1开始的
	{
		p=p->next;
		i++;
	}
	if(i!=pos-1)
	{
	 //插入的位置不合理
		printf("插入的位置不合理");
		return 0;
	}
	if(q=(pzlistlink)malloc(sizeof(struct _node)))
	{
       q->next=p->next;
	   p->next=q;
	   q->data=value;
	}
	return 1;
}


INT8 Addlistelement(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL)
		p=p->next;
	q=(pzlistlink)malloc(sizeof(struct _node));
	if(!q)exit(0);
	p->next=q;
	q->data=value;
	q->next=NULL;
	return 1;
}

//删除指定的元素
INT8 delete_list_element_pos(pzlistlink head,int pos)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&i<pos-1&&p->next->next!=NULL)
	{
         p=p->next;
		 i++;
	}
	if(i!=pos-1)
	{
		printf("删除的位置有误");
		return -1;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return 0;

}

//删除指定的位置的元素
int dele_pos_value(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&p->data!=value)
	{  
	   q=p;
       p=p->next;
	}
	if(p->data==value)
	{
		q->next=p->next;
		free(p);
		return 1;
	}
	else 
	return 0;
}

////删除指定值的元素
int dele_pos_element(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i;
	p=head;
	i=0;
	while(p->next!=NULL&&p->next->next!=NULL&&p->data!=value)
	{
        p=p->next;
		i++;
	}
	if(value!=p->data)
	{
		printf("删除元素不存在");
		return -1;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return 0;
	
    
}

//查找是否含有该元素
INT8 Find_Element(pzlistlink head,_type value)
{
	pzlistlink p;
	int i=0;
	p=head;
	while(p->next!=NULL&&p->data!=value)
	{
           p=p->next;
	}
	if(p->data==value)
	{
		//printf("该元素不存在！");
		return 1;
	}
	return 0;


}
//删除链表A中的元素 该元素在B中也有
int dele_element_collection(pzlistlink A,pzlistlink B)
{
	pzlistlink q,p;
	_type value;
	int i=0;
	q=A;
	p=B;
	while(p->next!=NULL)
	{
       // value=p->data;
		p=p->next;
		value=p->data;

		if(Find_Element(A,value))
		{
		  dele_pos_value(A,value);
		}
	
	}
	return 1;
}

void display(pzlistlink head)
{
	pzlistlink p;
	p=head;
	while(p->next!=NULL)
	{  
		p=p->next;//先后移跳出头节点
		printf("%d ",p->data);
		
	}
}

//获取长度
int getlength(pzlistlink head)
{
	int length=0;
	pzlistlink p;
	p=head;
	while(p)
	{
		p=p->next;
	    length++;
	}
	return length;
}


//销毁链表
void destroy(pzlistlink head)
{
	pzlistlink p,q;
	p=head;
	while(p)
	{ 
      q=p;
	  p=p->next;
	  free(q);
	  q=NULL;
	}
}

//合并单链表 A 和B 到C 并且是非递减的值
void mergelist(pzlistlink A,pzlistlink B,pzlistlink C)
{
	pzlistlink pa,pb,pc;
   
	
	pa=A->next;//pa=指向A的第1个元素
	pb=B->next;//pb指向B的第2个元素

	C=A;
	C->next=NULL;
	pc=C;

	while(pa&&pb)
	{
		if(pa->data>=pb->data)
		{
	        //将pa的值放到c的后面
			pc->next=pa;
			pc=pa;//将pc后移 并不增加空间的开销
			pa=pa->next;
		}
		else 
		{    pc->next=pb;
			 pc=pb;
			 pb=pb->next;
		}
	}
	 pc->next=(pa?pa:pb);//pa是null么 若是就是pb链接 若不是就是pa链接
     free(B);
	 C=A;
}

