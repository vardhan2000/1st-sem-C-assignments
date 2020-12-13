#include<stdio.h>
#include<math.h>

int main()

{double a,b,c,d,e,f;
scanf("%lf %lf %lf",&a,&b,&c);

if(((b*b)-(4*a*c))>=0 && a!=0)
{
d=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
e=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
printf("%.2lf %.2lf\n",d,e);
}

else if(((b*b)-(4*a*c))<0 && a!=0)
{
f=sqrt(-(b*b)+(4*a*c));
printf("%.2lf+i%.2lf  ",((-b)/(2*a)),f);
printf("%.2lf-i%.2lf\n",((-b)/(2*a)),f);
}

return 0;
}
