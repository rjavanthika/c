#include<stdio.h>
int yr;
printf(" enter a year\n");
scanf("%d",&yr);
if(yr%4==0)
{
if(yr%100==0)
{
if( yr%400==0)
printf("\n it is leap year");
else 
printf("\n is not leap year");
}
else{
printf (" \n is the leap year");
}
}else
printf(" \n is not a leap year");
return 0;
}
