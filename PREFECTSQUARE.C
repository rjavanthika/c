#include <stdio.h>

int main(void) {
	int a,b,mul,p,count;
	printf("enter the numbers:");
	scanf("%d %d",&a,&b);
	mul=a*b;
	for(p=0;p<1000;p++)
	{
		if(mul==p*p)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("\n perfect square");
	}
	else
	printf("no perfect square");
	return 0;
}
