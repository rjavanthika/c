#include<stdio.h>
int main()
{
int a,i,flag=0;
printf("enter a positive integer:");
scanf("%d",&a);
for (i=2;i<a/2;++i)
{
if(a%1==0)
{
flag=1;
break;
}}
if(flag==0)
printf("%d is a primenumber:",a);
else
printf("%d is not a prime number:",a);
return 0;
}
