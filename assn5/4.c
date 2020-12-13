#include<stdio.h>

int partition(int left, int right, long long int A[])
{
	
	long long int pivot = A[right];
	int i = left - 1, j = right - 1;

	while(i < j)
	{
		do
		{
			i++;
		}while(A[i] <= pivot);

		do
		{
			j--;
		}while(A[j] > pivot);
		
		if(i < j)
		{
			long long int temp;
        		temp = A[i];
        		A[i] = A[j];
        		A[j] = temp;
		}
	}

	long long int temp1;
        temp1 = A[i + 1];
        A[i + 1] = A[right];
        A[right] = temp1;

	return (i + 1);
}


int quick_sort(int low, int high, long long int arr1[])
{
	if(low < high)
	{
		int j = partition(low, high, arr1);
		quick_sort(low, j - 1, arr1);
		quick_sort(j + 1, high, arr1);

	}
}

int main()
{
	int i, m;
	scanf("%d", &m);

	long long int arr2[m];

	for(i = 0; i < m; i++)
		scanf("%lld,", &arr2[i]);
	quick_sort(0, m - 1, arr2);
	
	for(i = 0;  i < m; i++)
                printf("%lld ", arr2[i]);
	
	return 0;
}
