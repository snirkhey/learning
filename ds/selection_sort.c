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
void selection_sort(int * a,int size)
{
	int i=0;
	for(i=0;i<size-1;i++)
	{
                print_array(a,size);
		int min_index=i;	
		int j;
		for(j=i+1;j<size;j++)
		{
			if ( a[min_index] > a[j])
			{
				min_index = j;
			}
		}
		//put the minimum value at ith index
		int t=a[i];
		a[i]=a[min_index];
		a[min_index]=t;
	}
}
int main()
{
	int arr[]={76,92,27,26,31,90,87,11,22};
	selection_sort(arr,9);
        return 0;

}
