#include<stdio.h>
int main(){

    int n, i;
    float avg;

    printf("Enter Size of Array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int sum = arr[0];

    for(i=1; i<n; i++){
        if(arr[i]>max)
        max = arr[i];

        if(arr[i]<min)
        min = arr[i];

        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Average = %d\n", avg);

    return 0;
}