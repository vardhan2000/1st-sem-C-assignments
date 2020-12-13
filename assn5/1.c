#include<stdio.h>

void bubble_sort(long long int a[])
{
	long long int temp;
	int i, j, r, k = 0, l = 0;

	for(r = 19; r > 0; r--)
	{	
		for(i = 0; i < r; i++)
		{

			if(a[i] > a[i + 1])  //swapping the elements of array if not in increasing order
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				k++; //k is for counting the no. of comparisons
				l++; //l is for counting the no. of swaps
			
			}

			else
				k++;


		}
	}

	//printing the elements of sorted array
	for(j = 0; j < 20; j++)
		printf("%lld ", a[j]);
	printf("\n");
	printf("%d %d\n", l, k);

}


int main()
{
	long long int b[20], final;
	int k, l;


	for(k = 0; k < 20; k++)
		scanf("%lld,", &b[k]);

	bubble_sort(b);
	
	return 0; 

}

