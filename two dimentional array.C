#include<stdio.h>
#include<conio.h>
int main()
{
int ar[3][4],average,sum,i,j;
clrscr();
for(i=0;i<3;i++)
{
printf("enter student grade%d\n",i+1);
for(j=0;j<4;j++)
{
printf("enter subject grade%d\n",j+1);
scanf("%d",&ar[i][j]);
}
}
for(i=0;i<3;i++)
{
sum=0;
for(j=0;j<4;j++)
{
sum=ar[i][j]+sum;
}
printf("sum of student%d=%d",i+1,sum);
}
for(j=0;j<4;j++)
{
sum=0;
for(i=0;i<3;i++)
{
sum=sum+ar[i][j];
}
average=sum/3;
printf("average of subject%d=%d\n",j+1,average);
}
getch();
return 0;
}