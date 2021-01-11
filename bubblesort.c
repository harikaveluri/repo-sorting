#include<stdio.h>
#define size 4


void bubblesort(int *a,int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;

			}


}



int main()
{
	int i,a[size];
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	bubblesort(a,size);
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;

}
