#include<stdio.h>

//defining a function to add two numbers
double add(double a, double b)
{
	return ((double)a + b);
}

//defining a function to subtract two numbers
double subtract(double a, double b)
{
	return ((double)a - b);
}

//defining a function to multiply two numbers
double multiply(double a, double b)
{
	return ((double)a * b);
}

//defining a function to divide two numbers
double divide(double a, double b)
{
	return ((double)a / b);
}


int main()
{
	double a, b; //'a' and 'b' are to store the input of two integers 
	char sign; //'sign' is to store the sign of operator to be used

	scanf("%lf %lf %c", &a, &b, &sign);
	
	//using an array of function pointers for 'add', 'subtract', 'multiply' and 'divide' functions 
	double(*fun_ptr_arr[])(double, double) = {add, subtract, multiply, divide};
	
	//declaring an array of signs of operators with the corresponding indices as that in the above array of functions
	char ch[] = {'+','-','*','/'};

	//loop to find the index of the function in the array 
	int i;
	for(i = 0; i < 4; ++i)
	{
		if(ch[i] == sign)
			break;
	}
	
	//calling the function through through the array of function pointers
	double j = (*fun_ptr_arr[i])(a, b);

	printf("%.4lf ", j);

	return 0;
}
