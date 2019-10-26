#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j;
char shape='*';
clrscr();
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)

{printf("%c",shape);
}
printf("/n");
}
getch();
return 0;
}