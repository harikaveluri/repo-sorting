#include<stdio.h>
#define size 5

void insertionsort(int *a)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		temp=a[i];
		j=j-1;
		for(j=i-1;j>=0 && (a[j]>temp);j--)
		
			a[j+1]=a[j];
		
		a[j+1]=temp;

	}
}



int main()
{
	int a[size],i;
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	insertionsort(a);
	for(i=0;i<size;i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;

}

