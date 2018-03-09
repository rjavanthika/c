#include<stdio.h>
int main()
{
int m, reversedinteger=0,remainder,originalinteger:
printf("enter an integer:");
scanf("%d", &m);
originalinteger=m;
while(m!=0)
{ remainder=m%10:
reverseinteger=+reversadinteger*10+remainder;
m/=10;
}
if(originalinteger==reversedinteger)
printf("%d is a palidrome",originalinteger);
else
printf("%d is not a palindorme",originalinteger):
return 0;
}
