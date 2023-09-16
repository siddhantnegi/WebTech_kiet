#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;
    printf("Enter 5 number\n");
    for (i = 0; i < 5; ++i)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; ++i)
    {
        sum += arr[i];
    }
    printf("Average = %d\n", sum/5);
    return 0;
}

