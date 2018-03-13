#include<stdio.h>
void main()
{
int a[25];
int n,i,max=0;
printf("enter no. of elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("the max no. is:%d",max);
}
