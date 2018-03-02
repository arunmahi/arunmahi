#include<stdio.h>
void main()
{
char str[25];
int i,a,n;
printf("enter the string: ");
scanf("%[^\n]s",str);
n=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0' && str[i]<='9')
{
    a++;
}
}
printf("%d",a);
}
