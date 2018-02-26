#include <stdio.h>
int main()
{
    int i, n, M = 0, N = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", M);
        nextTerm = M + N;
        M = N;
        N = nextTerm;
    }
    return 0;
}
