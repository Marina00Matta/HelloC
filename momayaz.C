#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
int a,b,c;
float disc,x1,x2;
clrscr();
printf("enter three different values");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
disc =((b*b)-(4*a*c));
printf("disc=%f",disc);
if(disc>0)
{
x1 = (-b+sqrt(disc))/(2*a);
x2 = (-b-sqrt(disc))/(2*a);
printf("roots %f,%f",x1,x2);
}
if(disc<0)
{
x1 = (-b+sqrt(-disc))/(2*a);
x2 = (-b-sqrt(-disc))/(2*a);
printf("roots %f,%f",x1,x2);
}
if(disc==0)
{
x1=x2=(-b/2*a);
printf("roots %f,%f",x1,x2);
}
getch();
return 0;
}


