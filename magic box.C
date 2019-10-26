#include <stdio.h>
#include <conio.h>
int main ()

{

int size,col,row,num;
clrscr();
printf("enter your size");
scanf("%d",&size);
if( (size%2)>0)
{
col=(size+1)/2;
row=1;
gotoxy(col*3,row*3);
printf("1");
for(num=2;num<=(size*size);num++)
{
if((num-1)%size !=0)
{
row=row--;
col=col--;
if(row==0)
{
row=size;
}
if(col==0)
{
col=size;
}
gotoxy (col*3,row*3);
printf("%d",num);
}
if((num-1)%size==0)
{
row=row++;
if(row>size)
{
row=1;
}
gotoxy (col*3,row*3);
printf("%d",num);
}
}
}
else{
printf("bas ya 7omar");
}
getch();
return 0;
}
