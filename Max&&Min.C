#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter five different numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

if(a>b&&a>c&&a>d&&a>e)
{
printf("\nmax num is%d",a);
}
if(b>a&&b>c&&b>d&&b>e)
{
printf("\nmax num is %d",b);
}
if(c>a&&c>b&&c>d&&c>e)
{
printf("\nmax num is %d",c);
}
if(d>a&&d>b&&d>c&&d>e)
{
printf("\nmax num is %d",d);
}
if(e>a&&e>b&&e>c&&e>d)
{
printf("\nmax num is %d",e);
}
return 0;
}
