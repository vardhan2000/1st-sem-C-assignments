#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//defining a function  to return 1 or 0 accordingly
int strend(char *s, char *t)
{
	int l1 = strlen(t), l2 = strlen(s);
	int output = 1; //'output' stores the value to returned to function.

	//loop to assign the correct value to the 'output' according to the input given
	for(int i = 0; i < l1; ++i)
	{
		if(t[i] != s[l2 - l1 + i])
		{
			output = 0;
			break;
		}

	}

	return output;
}



int main()
{
	char *s, *t;

	//dynamically allocating memory to store the original string in 's' and the substring to be checked in't'  
	s = (char *)malloc(257 * sizeof(char));
	t = (char *)malloc(257 * sizeof(char));

	scanf("%s %s", s, t);

	int output = strend(s, t);

	//"if else" is to print the required result 
	if(output == 1)
		printf("%s ", t);

	else
		printf("0 ");

	//to free the allcated memory
	free(s);
	free(t);
	
	return 0;
}
