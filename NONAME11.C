#include <stdio.h>
#include <conio.h>
int main()
{
int x,max,min, i=0;
clrscr();
printf("enter your first value");
scanf("%d",&x);
max=x;
min=x;
for (i=0;i<4;i++) {
printf("enter your next value");
scanf("%d",&x);
if (x>max)
{max=x;
}
if(x<min)
{
min=x;
}
}
printf("min=%d & max=%d",min,max);
getch();
return 0;
}