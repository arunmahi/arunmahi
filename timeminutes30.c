#include<stdio.h>
void main()
{
int h1,m1,h2,m2,x,y,z;
printf("enter hour1: and min1: ");
scanf("%d%d",&h1,&m1);
printf("enter hour2: and min2: ");
scanf("%d%d",&h2,&m2);
m1=(h1*60)+m1;
m2=(h2*60)+m2;
x=m1-m2;
y=x/60;
z=x%60;
printf("remining hour:%d min:%d",y,z);
}
