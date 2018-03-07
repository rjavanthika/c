#include <stdio.h>
#include<string.h>
int main(void) {
	char M[100];
	int alp=0,num=0;
	scanf("%s",M);
	int i,m;
	m=strlen(M);
	for(i=0;i<m;i++)
	{
		if(('a'<=M[i] && M[i]<='z') || ('A'<=M[i] && M[i]<='Z'))
		{
			alp=1;
		}
		if('0'<=M[i] && M[i]<='9')
		{
			num=1;
		}
	}
	if(num==1&& alp==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
