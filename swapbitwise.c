#include<stdio.h>
void main()
{
int a,b;
printf("enter a,b values: ");
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("after swapping a=%d: b=%d",a,b);
}
