#include <stdio.h>

int main(void) 
{
	int n,i,j,temp,a[i];
	float m;
	printf("\n enter the array size:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		m=(a[n/2]+a[(n-1)/2])/2;
	}
	else
	{
		m=a[n/2];
	}
	printf("%f",m);
	return 0;
}
