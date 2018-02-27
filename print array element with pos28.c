#include<stdio.h>
void main()
{
int a[15],i,n;
printf("enter the array size");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n %d%d",a[i],i);
}
}
