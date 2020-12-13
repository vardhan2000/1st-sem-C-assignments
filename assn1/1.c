#include<stdio.h>
int main()
{
float rad,area;
scanf("%f",&rad);
if (rad>=0)
{
area=3.14*rad*rad;
printf("%.2f\n",area);
}
else
{
printf("Invalid input\n");
}
return 0;
}


