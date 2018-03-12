#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        if(m%2==1)
        printf("%d\n",m);
        n=n/10;
    }
    return 0;
}
