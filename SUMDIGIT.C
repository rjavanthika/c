#include<stdio.h>
int main(void) {
	int n,sum=0,N;
	scanf("%d",&n);
	while(n!=0)
	{
		N=n%10;
		sum=sum+N;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
