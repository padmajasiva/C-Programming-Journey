#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
