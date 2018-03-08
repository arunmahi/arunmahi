#include<stdio.h>
void main()
{
int a,b,c=0;
printf("enter a,b values: );
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swapping a=%d: b=%d",a,c);
}
