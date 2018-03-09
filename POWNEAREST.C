#include<stdio.h>
int main(void)
{
int n,count=0,Y=1,pow=2;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(int i=0;i<count+1;i++)
{
Y=Y*pow;
}
printf("%d",Y);
return 0;
}
