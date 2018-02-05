
#include<stdio.h>
int main()
int factorial(int fact);
{
int n,m, fact,i;
printf( "enter a number");
scanf("%d",&n);
m=factorial(n);
printf("factorial of the given number%d",m);
}
int factorial(int fact);
{
for(i=1;i<=fact;i++)
{
fact=fact*i;
}
}
return(fact);
}
