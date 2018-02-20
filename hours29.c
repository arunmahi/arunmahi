#include<stdio.h>
void main()
{
int a,minutes;
printf("Enter total minutes");
scanf("%d",&minutes);
a=minutes/60;
printf("\nHours:%d",a);
minutes=minutes%60;
printf("\t minutes:%d",minutes);
}
