#include <stdio.h>

int main()
{
    char d[100], e[100];
    
    printf("Enter the first string\n");
    gets(d);
    
    printf("Enter the second string\n");
    gets(e);
    
    strcat(d,e);
    
    printf("String concatenation is %s\n",d);
    
    return 0;

}
