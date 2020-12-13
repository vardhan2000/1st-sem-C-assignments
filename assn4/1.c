#include<stdio.h>

int main()
{
	int a[10], i, j;
	
	//taking integer input in an array 
	for(i=0; i<10; i++)
		scanf("%d,", &a[i]);

	// printing the elements of the array formed in reverse order
	for(j=9; j>=0; j--)
		printf("%d ", a[j]);

	printf("\n");

	return 0;





}

