#include<stdio.h>
#include<conio.h>
int main()
{
int row=1;
char ch;
clrscr();
gotoxy(1,1);
printf("New");
gotoxy(1,2);
printf("Edit");
gotoxy(1,3);
printf("Save");
gotoxy(1,4);
printf("Exit");
gotoxy(1,1);
do
{
ch=getch();
if(ch==0)    //check extended number
{
ch=getch();
if(ch==72)   //check up arrow
{
row=row--;
if(row<1)
{
row=1;               //to turn the cursor back to row 4
}
gotoxy(1,row);       //to change row number in the memory
}
if(ch==80)
{                    //down arrow
row=row++;
if(row>4)
{
row=1;
}
gotoxy(1,row);
}
if(ch==71)          //home
{
row=1;
gotoxy(1,row);
}
if(ch==79)          //end
{
row=4;
gotoxy(1,row);
}
}
else
{
if(ch==13)                        //enter
{
if(row==1)
{
gotoxy(10,row);
printf("New is pressed");
}
if(row==2)
{
gotoxy(10,row);
printf("Edit is pressed");
}
if(row==3)
{
gotoxy(10,row);
printf("Save is pressed");
}
}
}
}while(!((ch==13&&row==4) || ch==27));

//getch();
return 0;
}
