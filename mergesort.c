#include <stdio.h>


void Merge(int a[], int left, int mid, int right)
{
	int i, j, k, n1, n2;
	
	n1 = mid - left + 1;
	n2 = right - mid;
	
	int lArray[n1], rArray[n2];
	
	for(i = 0; i < n1; i++)
		lArray[i] = a[left+i];
	
	for(i = 0; i < n2; i++)
		rArray[i] = a[mid + 1 + i];
	
	i = j = 0;
	
	for(k = left; k <= right; k++)
	{
		if((lArray[i] < rArray[j]) && (i < n1))
		{
			a[k] = lArray[i];
			i++;
		}
		else if(j < n2)
		{
			a[k] = rArray[j];
			j++;
		}
	}
}
void mergeSort(int a[], int left, int right)
{
	int mid = 0;
	
	if(left >= right)
		return;
	
	mid = (left + right) / 2;
	
	mergeSort(a,left,mid);
	mergeSort(a,mid + 1, right);
	Merge(a,left, mid, right);
}


int main(void)
{
	int a[20],n,i;
	
	while(1)
	{
		printf("Enter the no. of elements :\n");
		scanf("%d",&n);
		
		printf("Enter the elements:\n");
		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);
		
		mergeSort(a,0,n-1);
		
		printf("Sorted elements are:\n");
		for(i = 0; i < n; i++)
			printf("%d    ", a[i]);
		
		printf("\n");
		
	}
	return 0;
}
	
