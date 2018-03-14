#include <stdio.h>

int main(void) {
	int a[15],b[15],c[15];
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(i%2==0)
		c[i]=a[i]/b[i];
		else
		c[i]=a[i]%b[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
