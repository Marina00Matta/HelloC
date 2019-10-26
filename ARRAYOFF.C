#include<stdio.h>
#include<conio.h>
int main()
{
int min,max,i,array[5];
clrscr();
for(i=0;i<5;i++)
{
printf("enter five numbers");
scanf("%d",&array[i]);
}
max=array[0];
min=array[0];
for(i=1;i<5;i++)
{
if(array[i]>max)
{
max=array[i];
}
if(array[i]<min)
{
min=array[i];
}
}
printf("max=%d,min=%d",max,min);
getch();
return 0;
}