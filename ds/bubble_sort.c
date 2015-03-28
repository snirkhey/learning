#include<stdio.h>

void print_array(int* a,int n)
{
        printf("\n[");
        int i=0;
	for (i=0;i<n;i++)
	{
                if (i==n-1)
                   printf("%d ",a[i]);
                else
		  printf("%d, ",a[i]);	
	}
        printf("]\n");

}
void bubble_sort(int * a,int size)
{
	int i=0;
	for(i=0;i<size-2;i++)
	{
                print_array(a,size);
		int j;
		for(j=0;j<size-1;j++)
		{
			if ( a[j] > a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
		}
	}
}
int main()
{
	int arr[]={76,92,27,26,31,90,87,11,22};
	bubble_sort(arr,9);
        return 0;

}
