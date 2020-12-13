#include<stdio.h>

int main()
{
	int a[11], i, j, l, r, k=0, m;

	//taking integer input in an array
	for(i=0; i<=10; i++)
		scanf("%d,", &a[i]);
	l = 0; m = 0;
	r = 9;

//checking whether the given no. lies in the input integers through binary search and assigning value to k and m accordingly.
	while(l <= r)
	{
		j = (l + r) / 2;
		m++;

		
        	if(a[j] < a[10])
			l = j + 1;
        	else if (a[j] > a[10])
			r = j - 1;
        	else if(a[j] == a[10])
		{	
			k = 1;
			break;
		}

		else
		{
			k = 0;
			break;
		}


	}

	printf("%d %d\n", k, m);
	return 0;


}

		
            

