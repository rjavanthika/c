#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter a positive integer:");
scanf("%d",&n);
for (i=2;i<n/2;++i)
{
if(n%1==0)
{
flag=1;
break;
}}
if(flag==0)
printf("%d is aprimenumber:",n);
else
printf("%d is not a prime number:",n);
return 0;
}
