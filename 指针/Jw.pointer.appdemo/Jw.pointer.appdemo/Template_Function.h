template<class TYPE,class int>
void mysort(TYPE * ptr,int __index)
{
	int i,j,k;
	for(i=0;i<__index;i++)
	{
         k=*(ptr+i+1);//��¼������ֵ
		 j=i;//���������һ��Ԫ�ص�λ��
		 while(j>-1&&k<*(ptr+j))
		 {
		       *(ptr+j+1)=*(ptr+j);
			   j--;
		 }
		 *(ptr+j+1)=k;
	} 
}