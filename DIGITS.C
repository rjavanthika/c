#include<stdio.h>
int main(void) 
{
	int i,b;
	char a[10];
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		printf("\n %c",a[i]);
	}
	return 0;
}
