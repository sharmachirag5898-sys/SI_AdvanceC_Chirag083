#include<stdio.h>
int main(){

    int n, i, target, found = 0;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d", &target);

    for(i=0; i<n; i++){
        if(arr[i]==target){
            printf("Elements found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found==0){
        printf("Elements not present");
    }

    return 0;
}