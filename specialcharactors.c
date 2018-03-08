#include<stdio.h>
void main()
{
char a[50];
int i,count=0;
printf("enter the sentence");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(!(a[i]>='0' && a[i]<='9' || a[i]>='a' && a[i]<='z'))
{
count=count+1;
}
}
printf("\n no. of spl characters is:%d",count);
}
