#include<stdio.h>
void main()
{
int a,r,temp=0;
printf("enter the value");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
r=r*10;
r=r+temp%10;
temp=temp/10;
}
if(r==a)
{
printf("it is palindrome");
}
else
{
printf("it is not palindrome");
}
}
