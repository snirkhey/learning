#include<stdio.h>

void print_array(int* a,int size)
{
	int i=0;
	for(i=1;i<=size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int lchild(int *a,int *i)
{
	int cindex=2* (*i);
	*i=cindex;
	return a[cindex]; 
}
int rchild(int *a,int *i)
{
	int cindex=2 * (*i)+1;
	*i=cindex;
	return a[cindex]; 	
}
void max_heapify(int *a,int index)
{
	printf("max_heapify index=%d\n",index);
	int lindex=index;
	int rindex=index;
	int windex=-1;
	if ( lchild(a,&lindex)>rchild(a,&rindex) )
        {
		windex=lindex;		

	}
	else
	{
		windex=rindex;
	}
	printf("windex=%d\n",windex);
	if( a[windex] > a[index])
	{
		printf("swap required\n");
		int temp=a[index];
		a[index]=a[windex];
		a[windex]=temp;
	}
}
void build_heap(int* a,int size)
{
	print_array(a,size);
	int i=1;
	for(i=size/2;i>=1;i--)
	{
		max_heapify(a,i);
		print_array(a,size);
	}
	print_array(a,size);
}
int main()
{
	int a[]={6,2,4,3,7,9,23,11};
	build_heap(a,7);
	return 0;
}
