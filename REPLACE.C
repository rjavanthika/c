#include <stdio.h>
#include<string.h>
int main(void) {
	char c[10];
	int m;
	scanf("%s",c);
	m=strlen(c);
	if(m%2==0)
	{
		c[m/2]='*';
		c[(m/2)-1]='*';
	}
	else
	{
		c[m/2]='*';
	}
	printf("%s",c);
	return 0;
}
