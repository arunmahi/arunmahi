#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,a=1;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			a=a+1;
		}
	}
	printf("\nno of words=%d",a);
	return 0;
}
