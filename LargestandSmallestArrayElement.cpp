#include<stdio.h>
int main(){

    int n, i;
    int largest=0, smallest=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n; i++){
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}