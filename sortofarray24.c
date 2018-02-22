#include <stdio.h>
int main(void) 
{
	int b,i,j,temp, a[i];
	printf("\n enter the array size:");
	scanf("%d",&b);
	printf("\n enter the array elements:");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<b;i++)
	{
		printf("%d ",a[i]);
	}
  return 0;
}
