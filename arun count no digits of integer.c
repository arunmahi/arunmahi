#include<stdio.h>
void main()
{
long long x;
int y=0;
printf("enter the integer");
scanf("%lld",&x);
while(x !=0)
{
x /=0;
++y;
}
printf("no of digits is %d",y);
}
