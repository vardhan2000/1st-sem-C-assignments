#include<stdio.h>
int main()
{int a,b,c;
scanf("%d %d",&a,&b);
if(a>0 && b>0)
{if(a>=b)
{c=a%b;
printf("%d\n",c);
}
else if (a<b)
{c=b%a;
printf("%d\n",c);
}
}
else if(a<=0||b<=0)
{
printf("Invalid input\n");
}
return 0;
}
