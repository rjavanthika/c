#include <stdio.h>

int main(void) {
 int s;
printf(" enter the value");
scanf("%d",&s);
while(s%10!=0)
{
s++;
}
printf(" value is%d",s);
	return 0;
}
