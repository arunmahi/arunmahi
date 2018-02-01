#include<stdio.h>
#include<conio.h>
void main()
{
int x,a[x],c=0,K,j;
printf("enter sum upto and no: of elements");
scanf("%d%d",&K,&j);
for(x=1;x<=j;x++)
{
scanf("%d",&a[x]);
}
for(x=1;x<=K;x++)
{
c=c+a[x];
}
printf("sum is %d",c);
}
