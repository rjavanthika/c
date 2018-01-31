#include<stdio.h>
int main()
{
int n, reversedinteger=0,remainder,originalinteger:
printf("enter an integer:");
scanf("%d", &n);
originalinteger=n;
while(n!=0)
{ remainder=n%10:
reversedinteger=+reversadinteger*10+remainder;
n/=10;
}
if(originalinteger==reversedinteger)
printf("%d is a palidrome",originalinteger);
else
printf("%d is not a palindorme",originalinteger):
return 0;
}
