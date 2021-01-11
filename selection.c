#include<stdio.h>
#define size 5


void selectionsort(int *a)
{
	int i,j,n,temp;
	for(i=0;i<size-1;i++)
	{
		n=i;
		for(j=i+1;j<size;j++)
			if(a[j]<a[n])
				n=j;
		temp=a[i];//here we have to use third variable without  third variable result will change(ex:in some cases n=i,and assume  a[i]=2;a[i]=a[i]+a[n](=4),a[n]=a[i]-a[n](4-4=0),result got changed)
		a[i]=a[n];
		a[n]=temp;

	}
}


int main()
{
	int a[size],i;
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	selectionsort(a);
	for(i=0;i<size;i++)
		printf("%d  ",a[i]);
	printf("\n");

}

