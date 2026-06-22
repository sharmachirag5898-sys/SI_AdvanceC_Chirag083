#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int even[n];
    int odd[n];

    int e = 0, o = 0;

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
        {
            even[e++] = arr[i];
        }
        else
        {
            odd[o++] = arr[i];
        }
    }

    printf("Even Elements:\n");

    for(i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd Elements:\n");

    for(i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}