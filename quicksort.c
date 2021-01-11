#include <stdio.h>

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
	
int Partition(int a[], int left, int right)
{
	int pivot = a[right];
	int i = left - 1, j = left;
	
	for(; j < right; j++)
	{
		if(a[j] <= pivot)
		{
			i++;
			if(i != j)
				swap(&a[i], &a[j]);
		}
	}
	i++;
	if(i != right)
		swap(&a[i],&a[right]);
	
	return i;
}
	
void QuickSort(int a[], int left, int right)
{
	int mid;
	if(left >= right)
		return;
	
	mid = Partition(a,left,right);
	QuickSort(a,left,mid -1);
	QuickSort(a,mid + 1, right);
}

int main(void)
{
	int a[30], i, n;
	
	while(1)
	{
		printf("Enter the no. of elements in the array\n");
		scanf("%d",&n);
		
		printf("Enter the elements:\n");
		for(i = 0; i < n;i ++)
			scanf("%d", &a[i]);
		
		QuickSort(a,0,n-1);
		
		printf("Sorted elements are:\n");
		
		for(i = 0; i < n; i++)
			printf("%d   ", a[i]);
		
		printf("\n");
	}
	return 0;
}
