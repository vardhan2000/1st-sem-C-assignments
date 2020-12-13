#include<stdio.h>
#include<stdlib.h>

int main()
{int a,b,r;
scanf("%d %d",&a,&b);
a=abs(a);
b=abs(b);

if (a>=b && a!=0 && b!=0)
	{while(b>0)
		{r=a%b;
		 a=b;
		 b=r;}
	 printf("%d\n",a);}

else if (b>a && a!=0 && b!=0)
	{while(a>0)
		{r=b%a;
		 b=a;
		 a=r;
		 }
	printf("%d\n",b);}

else if (a==0 && b!=0)
	{printf("%d\n",b);}

else if (a!=0 && b==0)
	{printf("%d\n",a);}
else if(a==0 && b==0)
	{printf("Invalid input\n");}

return 0;
}
