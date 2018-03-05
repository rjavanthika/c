#include <stdio.h>
int main()
{
    int i, n, m = 0, l = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", m);
        nextTerm = m + l;
        m = l;
        l = nextTerm;
    }
    return 0;
}

 
