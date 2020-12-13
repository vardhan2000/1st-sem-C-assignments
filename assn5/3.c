#include<stdio.h>

int count = 0; //global variable to count the no. of times merge code is run

//defining the merge function
void merge(long long int arr[], int a, int b, int c)
{
	int i, j, k; //temporary variables
	int rr = c - b; //rr is the size of array for right part of original array
	int lr = b - a + 1; //lr is the size of array for left part of original array
	

	long long int L[lr], R[rr]; //L and R are sorted arrays for storing the elements of left and right part of the original array resp.

	i = 0; //storing the elements in the L array
	while(i < lr)
	{
		L[i] = arr[a + i];
		i++;
	}


	j = 0; // storing the variables in the R array
	while(j < rr)
	{
		R[j] = arr[b + j + 1];
		j++;
	}

	//merging the L and R arrays
	i = 0;
	k = a;
	j = 0;
	while(i < lr && j < rr)
	{
		if(L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
			k++;
		}

		else
		{
			arr[k] = R[j];
			j++;
			k++;
		}

	}

	 while(j < rr) //runs if rr is the array whose elements are left to be checked 
        {
                arr[k] = R[j];
                k++;
                j++;
        }


	while(i < lr) //runs if lr is the array whose elements are needed to be checked
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	//process of merging ends
	
}

//defining merge_sort function
void merge_sort(long long int arr1[], int l, int r)
{
	if(l < r) //base statement to exit recursion
	{
		count++; //counting the no. of times the merge function runs

		int mid = (l + r) / 2;

		merge_sort(arr1, l, mid); //recursion for the left part for each array as well as each sub array
      		merge_sort(arr1, mid + 1, r); //recursion for the right part of array as well as each sub array

		merge(arr1, l, mid, r);//merging the sub arrays
	}

}

int main()
{
	int i, m; //m is the size of array input by the user 
	scanf("%d", &m);

	long long int arr2[m];//arr2 is array to be sorted

	for(i = 0; i < m; i++)
		scanf("%lld,", &arr2[i]);
	
	merge_sort(arr2, 0, m - 1); // calling merge_sort function for arr2

	for (i = 0; i < m; i++) // printing the sorted array arr2
		printf("%lld ", arr2[i]);
	
	printf("\n%d\n", count);// printing the no. of times the merge function ran

	return 0;

}
