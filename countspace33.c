#include<stdio.h>
void main()
{
char str[20];
int i,c=0;
printf("enter the string: ");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
c=c+1;
}
}
printf("no. of spaces:%d",c);
}
