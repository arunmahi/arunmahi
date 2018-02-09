#include<stdio.h>
void main()
{
int a,n,b,rem,result=0;
printf("enter the integer : ");
scanf("%d",&a);
printf("enter the digits of given number : ");
scanf("%d",&n);
b=a;
while(b!=0)
{
rem=b%10;
result=result+pow(rem,n);
b=b/10;
}
if(a=result)
{
printf("the given number is armstrong");
}
else
{
printf("the given number is not an armstrong");
}
}
