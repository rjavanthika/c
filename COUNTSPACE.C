#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char str[MAX_SIZE];
    int alphabets, , others, i;

    alphabets = digits = others = i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
       else
        {
            others++;
        }

        i++;
    }
    printf(" alphabets=%d\n",alphabets);
    printf("Spacecharacters = %d", others);

    return 0;
}
