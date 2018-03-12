#include<stdio.h>

int main(void)

{

int m,i,flag=0;

scanf("%d",&m);

for(i=2;i<=m/2;i++)

{

if(m%i==0)

{

flag=1;

break;

}

}

if(flag==0)

{

printf("\n no");

}

else

{

printf("\n yes");

}

return 0;

}
