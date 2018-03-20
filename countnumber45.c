#include<stdio.h>
void main()
{
char s[10];
int i,N=0;
printf("enter the number:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
N=N+1;
}
printf("no. of digits:%d",N);
}
