#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char array[10]={'\0'};
int col;
int y;
char ch;
clrscr();
col=1;
do
{

ch=getch();
y=isalnum(ch);
if (y!=0)                            //alphanumeric
{array[col-1]=ch;
printf("%c",ch);
col++;
gotoxy(col,1);
}
if(ch==13)
{
gotoxy(col*5,5);
printf("%s",array);
getch();
}
if(ch==0)
{
ch=getch();                              //right
if (ch==77)
{  col++;

if (col>strlen(array))
{col=strlen(array);
gotoxy(col,1);}
gotoxy(col,1);
}
}
if(ch==75)                               //left
{col--;
if(col<1)
{col=1;
gotoxy(col,1);}
gotoxy (col,1);
}
if(ch==71)                               //home
{col=1;
gotoxy(col,1);
}
if(ch==79)
{col=strlen(array);                      //end
gotoxy(col,1);

}


}while(ch!=27&&ch!=13);
//getch();
return 0;
}
