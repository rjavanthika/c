#include<stdio.h>
int main()
{
char L[100];
int count=0,i;
printf("Enter the paragraph\n");
scanf("%[^\n]s",L);
for(i=0;L[i]!='\0';i++)
{
if(L[i]=='.')
count++;
}
printf("Number of lines in paragraph are:%d\n",count);
}
