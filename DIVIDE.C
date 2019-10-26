#include<stdio.h>
void divide(int x,int y);
int main()
{
int a,b;
printf("enter number:\n");
scanf("%d",&a);
printf("enter another number:\n");
scanf("%d",&b);
divide(a,b);
return 0;
}
void divide(int a,int b)
{
printf("result:%f",(float)a/b);
return;
}