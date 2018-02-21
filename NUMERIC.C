#include <stdio.h>
int main()
{
    char m[100];
    char * s = m;
    int  digits;
    digits =   0;
    printf("Enter any string : ");
    gets(m);
    while(*s)
    {
     if(*s>='1' && *s<='9')
     digits++;
     s++;
    }
     printf("Digits = %d\n", digits);
    return 0;
}
