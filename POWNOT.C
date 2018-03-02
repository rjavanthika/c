#include<stdio.h>
int  main()
{
int n,p;
printf("\t Enter the Number:");
scanf("%d",&n);
p=(n&&(n-1));
if(p==1)
printf("Yes",n);
else
printf("No",n);
return (0);
}
