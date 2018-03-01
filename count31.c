#include<stdio.h>
void main()
{
char str[50];
int a=0,i;
printf("enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
a++;
}
}
printf("%d",a);
}
