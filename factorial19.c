#include<stdio.h>
int main()
{
int a,i,fact=1;
printf("enter the number",a);
scanf("%d",&a);
for(i=0;i<=a;i++)
{
fact=fact+i;
}
printf("factorial is %d",fact);
return 0;
}
