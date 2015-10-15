template<class TYPE,class int>
void mysort(TYPE * ptr,int __index)
{
	int i,j,k;
	for(i=0;i<__index;i++)
	{
         k=*(ptr+i+1);//记录待排序值
		 j=i;//待排序的上一个元素的位置
		 while(j>-1&&k<*(ptr+j))
		 {
		       *(ptr+j+1)=*(ptr+j);
			   j--;
		 }
		 *(ptr+j+1)=k;
	} 
}