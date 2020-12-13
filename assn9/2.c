#include<stdio.h>

//creating a structure named with 'real' and 'imag'as its fields 
struct complereal
{
	float real, imag;
};

int main()
{
	struct complereal c1, c2; //declaring two structure variables 'c1' and 'c2'

	scanf("%f %f %f %f", &c1.real, &c1.imag, &c2.real, &c2.imag);//taking the real and imaginary parts of two complex numbers as input

	float add1, add2, sub1, sub2, mul1, mul2;//declaring a pair of variables for each operation to deal with real and imaginary parts seperately

	//adding the two complex numbers
	add1 = c1.real + c2.real;
	add2 = c1.imag + c2.imag;
	
	//subtracting the 2nd complex no. from 1st
	sub1 = c1.real - c2.real;
	sub2 = c1.imag - c2.imag;

	//multiplying the two complex no.
	mul1 = (c1.real * c2.real) - (c1.imag * c2.imag);
	mul2 = (c1.real * c2.imag) + (c1.imag * c2.real);

	//printing the output for each operation
	printf("%.2f + %.2fi\n", add1, add2); 
	printf("%.2f + %.2fi\n", sub1, sub2);
	printf("%.2f + %.2fi\n", mul1, mul2);

	return 0;
}