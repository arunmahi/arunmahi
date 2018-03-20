#include<stdio.h>
void main()
{
char a[10000];
int i,c,b;
printf("Enter the count of numbers: ");
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<c;i++)
{
if(a[0]<a[i])
a[0]=a[i];
}
printf("The greatest value is %d",a[0]);
for(i=0;i<c;i++)
{
if(b>a[i])
b=a[i];
}
printf("\nThe lowest value is %d",b);
}
