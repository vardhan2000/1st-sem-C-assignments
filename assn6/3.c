#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* conc(char *ptr1, char *ptr2)
{
	char *ptr;
	
	//dynamically allocating memory for storing the concatenated string
	ptr = (char *)malloc(512 * sizeof(char));
	
	//to check whether the memoris have been allocated successfully or not
	if(ptr1 == NULL || ptr2 == NULL || ptr == NULL)
		exit(0);
		
	else
	{
		//taking 2 strings as input
		scanf("%s %s", ptr1, ptr2);
		
		//the two following for loops are for concatenating the two strings by adding them one by one to ptr
		for(int i = 0; i < strlen(ptr1); ++i)
			ptr[i] = ptr1[i];
			
		for(int i = 0; i < strlen(ptr2); ++i)
			ptr[i + strlen(ptr1)] = ptr2[i];
	}
	return ptr;		
}

int main()
{
	char *ptr1, *ptr2;
	
	//dynamically allocating memory for taking the 2 strings to be concatenated as input 
	ptr1 = (char *)malloc(256 * sizeof(char));
	ptr2 = (char *)malloc(256 * sizeof(char));
	
	char *ptr_final = conc(ptr1,ptr2);
	
	//printing the concatenated string
	for(int i = 0; i < strlen(ptr_final); ++i)
		printf("%c", ptr_final[i]);
	
	printf(" ");
	
	//to free the allocated memory space after use
	free(ptr1);
        free(ptr2);
	
	return 0;		
	
}
