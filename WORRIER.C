#include <stdio.h>

int main(void) {
	 int d[10],b[10],c[10];
	 int n,i,j;
	 printf("enter the ninja warriors");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	  	scanf("%d %d",&d[i],&b[i]);
	  	c[i]=b[i]-d[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",c[i]);
	}
	return 0;
}
