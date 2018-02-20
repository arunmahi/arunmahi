#include<stdio.h>
int main()
{
int N,i,a[i],b;
printf("enter the number");
scanf("%d",&N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
{
b=a[0];
for(i=0;i<N;i++)
{
if(a[i]<b)
b=a[i];
}
printf("min=%d",b);
}
}
