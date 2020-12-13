#include<stdio.h>


void selection_sort(long long int a[])
{
	long long int temp;
	int i, j, k = 0, l = 0, b;

	for(i = 0; i < 19; i++)
	{	
		temp = a[i];
		l++; //l is for counting the no. of swaps
		for(j = i + 1; j < 20; j++)
		{
			if(temp >  a[j])
			{
				temp = a[j]; //temp is for storing the smallest no. in every loop
				b = j;
				k++; //k is for the no. of comparisons
			}

			else
				k++;
				
		}
		//swapping the elements
		if(temp != a[i])
		{
			a[b] = a[i];
			a[i] = temp;
		
		}
	
	}
	
	for(i = 0; i < 20; i++)
	       printf("%lld ", a[i]);
	
	printf("\n");
	printf("%d %d\n", l, k);	

}


int main()
{
	long long int c[20];
	int d;

	for(d = 0; d < 20; d++)
		scanf("%lld,", &c[d]);
	
	//calling the selection_sort function
	selection_sort(c);

}
