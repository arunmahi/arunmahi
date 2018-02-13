#include <stdio.h>

int main() 
{
	int n,i,l;
	printf("\nenter the no: ");
	scanf("%d",&n);
	printf("\nenter the limit: ");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	if(i%n==0)
	printf("\n%d",i);
	

	return 0;
}
