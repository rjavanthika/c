#include <stdio.h>
#define MAX_SIZE 100   
int main()
{
    int arr[MAX_SIZE];
    int i, max, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

    }
    printf("Maximum element = %d\n", max)

    return 0;
}

  
