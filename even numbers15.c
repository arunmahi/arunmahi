#include<stdio.h>
void main()
{
int a,b,i;
printf("enter the interval values a and b");
scanf("%d%d",&a,&b);
printf("\n the even numbers are:");
for(i=a;i<b;i++)
if(i%2==0)
{
printf(" \t  %d",i);
}
}
