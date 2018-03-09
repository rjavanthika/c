#include <stdio.h>

int main(void) 
{
	char m[10];
	scanf("%s",m);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",m[i]);
	}
	return 0;
}
