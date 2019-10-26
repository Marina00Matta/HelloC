#include<stdio.h>
int main()
{
int x,max,min, i=0;
printf("enter your first value");
scanf("%d",&x);
for (i=0;i<4;i++)
printf("enter your next value");
scanf("%d",&x);
if (x>max)
{
x=max;
}
if(x<min)
{
x=min;
}
printf("%d",max,min);
return =0;
}