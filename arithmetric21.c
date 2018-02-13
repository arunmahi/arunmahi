#include <stdio.h>

int main(void)
{
	int a,b,i,x=0,d;
	printf("\nEnter the initial value: ");
	scanf("%d",&a);
	printf("\nEnter the end value: ");
	scanf("%d",&b);
	printf("\nEnter the difference: ");
	scanf("%d",&d);
	for(i=a;i<=b;i=i+d)
	{
		x+=i;
	}
	printf("\n%d\n",x);
	return 0;
}
