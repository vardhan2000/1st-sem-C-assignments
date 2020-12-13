#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//defining a function to store the string the to be printed in 's'
void itob(int n, char *s, int b)
{
	//dynamically allocating the memory to store the reverse of the elements to be printed 
	char *s1 = (char *)malloc(1000 * sizeof(char));
	
	//'rem' is to store the remainder and 'count' is to terminate the 'for loop' used 
	int rem, count = -1;

//loop to add the corresponding strings in s1
	while(n > 0)
	{
		count++;
		rem = n % b;
		n = n / b;
		
		if(rem <= 9)
			s1[count] = rem + '0';//converting integers less than 10 to characters. Ex:- 1 to '1'
		else
			s1[count] = rem - 10 + 'a';//converting integers greater than 9 to corresponding characters. Ex:- 10 to 'a', 11 to 'b'.
	}

//loop to reverse the order of characters of s1 and store them in s
	for(int i = 0; i <=count; ++i)
		s[i] = s1[count - i];
	free(s1);

	s[count + 1] = '\0'; //adding a null character at the end so that 's' can be easily printed without using loop
}

int main()
{
	//'n' to take the integer to be converted to hexadecimal as input, 'b' to take the base as input
	int n, b;
	scanf("%d %d", &n, &b);

	//dynamically allocating memory to store the string the to be printed
	char *s = (char *)malloc(1000 * sizeof(char));

	itob(n, s, b); //calling the function
	
	printf("%s ", s); //printing the required output
	free(s);	

	return 0;
}
