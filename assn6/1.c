#include<stdio.h>
#include<stdlib.h>

void Print(int *ptr, int n)
{
	if(ptr == NULL) //to check whether the memory is successfull allocated
		exit(0);

	else
	{
		for(int i = 0; i < n; ++i) //taking input and storing them in the allotted memory space
			scanf("%d", &ptr[i]);

		for(int i = 0; i < n; ++i)
			printf("%d ", ptr[i]); //printing the no.

		free(ptr); //to free the allocated memory space after use
		ptr = NULL;
	}
}

int main()
{
	int n; //variable to indicate the size of memory to be allocated
	scanf("%d ", &n);
	
	int *ptr;
	ptr = (int *)malloc(n * sizeof(int)); //dynamically allocating the required memory space
	
	Print(ptr, n);
	
	return 0;
}
