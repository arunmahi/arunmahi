#include<stdio.h>
void main()
{
int a=0,b=1,n,i,c=0;
printf("enter the range");
scanf("%d",&n);
printf("%d",b);
for(i=0;i<n;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}
}
