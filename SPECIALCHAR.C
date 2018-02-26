#include <stdio.h>
 
int main()
{
    char    str[100];
    int countSpecialChar,countSpaces;
    int counter;
 
    countSpecialChar=countSpaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
       if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("%d \nSpaces: %d \nSpecial Characters: %d",countSpaces,countSpecialChar);
    return 0;
}
 
