#include <stdio.h>
#include<string.h>
int main() 
{
	char b[100];
	int n,i,count=0;
	scanf("%s",&b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
	    if(b[i]==' ')
	    {   
	        count++;
	    }
	    else
	    {
	        continue;
	    }
	}
    printf("%d",count+1);
	return 0;
}
