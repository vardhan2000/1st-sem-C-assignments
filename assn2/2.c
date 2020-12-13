#include<stdio.h>
#include<math.h>
int main()
{
	int n,numofprimes;
	numofprimes=0;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("0\n");
		return 0;
	}
	int a[n+1];
	for(int i=0;i<=n;i++)
		a[i]=i;
	
	for(int i=2;i<=sqrt(n);i++)
	{
		for(int j=i+1;j<=n;j++)
		{
		if(a[j]%i==0)
			{a[j]=0;}
		}

	
	}

	for(int k=2;k<=n;k++)
	{
		if(a[k] != 0)
			{numofprimes++;}
	}
printf("%d\n",numofprimes);
return 0;

}
