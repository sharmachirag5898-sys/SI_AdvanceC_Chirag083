#include<stdio.h>
int main(){

    int n, i, temp=0;

    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    int start = 0;
    int end = n - 1;

    while(start<end)
    {
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;

    }
    printf("\n Reversed Array:\n");

    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}