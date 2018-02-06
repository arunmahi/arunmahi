#include<stdio.h>
void main()
{
int a,i,x=0;
printf("enter the value");
scanf("%d",&a);
for(i=0;i<=a;i++)
if(a%i==0)
x++;
if(x==2)
printf("it is prime");
else
printf("it is not prime);
}
