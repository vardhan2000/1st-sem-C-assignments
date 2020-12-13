#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	if(argc == 4)//if number of arguments = 4 only then run the following code 
	{
		//converting the 1st two arguments after the 'program name' to integers and storing them to x and y respectively.
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		
		float output;//declaring the variable 'output' to store the result to be printed

		//if argument at 3rd index is '+' then perform addition
		if(strcmp(argv[3], "+") == 0)
			output = (float)x + y;

		//if argument at 3rd index is '-' then perform subtraction
		else if(strcmp(argv[3], "-") == 0)
			output = (float)x - y;

		//if argument at 3rd index is '*' then perform multiplication. However, on console we have to use '\*' instead of '*'.
		else if(strcmp(argv[3], "*") == 0)
			output = (float)x * y;

		//if argument at 3rd index is '/' then perform division only if y is not equal to zero
		else if(strcmp(argv[3], "/") == 0)
			{
				if(y != 0)
					output = (float)x / y;
					
				else
					return 0;
			}
					

		//printing the 'output' as result till 2 decimals
		printf("%.2f ", output);
	}

	return 0;
}
