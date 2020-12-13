#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int string_cmp(char *ptr1, char *ptr2)
{
	int n, output = 0;//'n' will store the length of string while 'm' will store the output for the console
	
	if(ptr1 == NULL || ptr2 == NULL)//to check whether the memory has been allotted successfully or not
		exit(0);
	
	else
	{
		scanf("%s %s", ptr1, ptr2);//taking 2 strings as input 
		
		//assigning value to 'n' for termination of loop
		if(strlen(ptr1) <= strlen(ptr2))
			n = strlen(ptr1);
		
		else
			n = strlen(ptr2);
		
		//comparing corresponding characters of the 2 strings and assigning the value to 'output' accordingly.
		for(int i = 0; i <= n; i++)
		{
			if(ptr1[i] != ptr2[i])
			{
				output = 1;
				break;
			}
		}

		return output;
	}
}

int main()
{
	char *ptr1, *ptr2;//declaring 2 pointers which will take the string inputs.
	
	//dynamically allocating memory for storing strings
	ptr1 = (char *)malloc(256 * sizeof(char));
	ptr2 = (char *)malloc(256 * sizeof(char));
	
	printf("%d ", string_cmp(ptr1, ptr2));
	
	//to free the allocated memory space after use
	free(ptr1);
        free(ptr2);
	
	return 0;	
}
