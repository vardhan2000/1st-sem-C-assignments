#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;// 'sum' stores the sum of arguments 
	
	// calculating sum after converting each string argument to integer 
	for(int i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("%d %d ", argc - 1, sum);// printing the no. of arguments passed and the sum of the arguments
}
