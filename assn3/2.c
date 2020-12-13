//To find the no. of distinct substrings of mentioned length l.

#include<stdio.h>
#include<string.h>

int main()
{
	int noofsubstrings = 0;
	int p,q;
	int k,l;
	char s[10000];  //declaring array for taking strings as input
	scanf("%s",s);
	scanf("%d",&l);	
	
	

	if(strlen(s) >= l)
	{	char a[strlen(s)-l+1][l]; //declaring array for storing the 1D input strings in 2D(substrings) form

		//storing the 1D input strings in 2D(substrings) form for easy operation.
		for(p=0;p<=strlen(s)-l;p++)
		{
			for(q=0;q<l;q++)
				a[p][q] = s[p+q];
		
		}

		for(p=0;p<strlen(s)-l;p++)
		{
			for(q=p+1;q<=strlen(s)-l;q++)
			{
				k = strncmp(a[p],a[q],l); //finding similar substrings
				if (k==0 && a[p][0]!='0')
					a[q][0]='0'; /*leaving one of the similar substrings unchanged while changing the others*/
			}
		}
		
		for(p=0;p<=strlen(s)-l;p++)
		{
			if(a[p][0]!='0') //so that similar substrings are counted only once
				noofsubstrings++;
		}
		printf("%d\n", noofsubstrings);

	}

	else
		printf("0\n");

	return 0; 
}




