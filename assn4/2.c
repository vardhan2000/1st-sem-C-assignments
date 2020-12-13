#include<stdio.h>

int main()
{
	int a[12], i, j, k, l;

	//taking integer input in an array
	for(i=0; i<=10; i++)
		scanf("%d,", &a[i]);

	/*checking whether the integer is among the given integers or not and then assigning the values to k and l accordingly*/


	for(j=0; j<10; j++)
	{
		if(a[j]==a[10])
		{
			k = 1;
			l = j + 1;
			break;
		}

		else
		{
			k = 0;
			l = 10;
		}
	}

	printf("%d %d\n", k, l);

	return 0;
}

