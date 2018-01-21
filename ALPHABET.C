#include<stdio.h>
int main()
{
char c;
printf("enter the character:");
scanf ("%s",&c);
if((c>='a'&&c<='z')\\(c>='A'&&c<='Z'))
printf("%s is an alphabet",c);
else
printf("%s is not an alphabet",c);
return 0;
}
