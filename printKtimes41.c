#include<stdio.h>
void main()
{
char str[20];
int i,n;
printf("enter the string:");
scanf("%[^\n]s",str);
printf("enter no. of times:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",str);
}
}
