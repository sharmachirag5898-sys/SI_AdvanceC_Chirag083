#include<stdio.h>
int main(){
    int n, i;

    printf("Enter the size of araay: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int element, pos;

    printf("Enter element to insert:");
    scanf("%d", &element);

    printf("Enter position (0 to %d):", n);
    scanf("%d", &pos);

    for(i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }

    arr[pos]=element;
    n++;

    printf("\n Array after insertion:\n");

    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("\nEnter position to delete:");
    scanf("%d", &pos);

    for(i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;

    printf("\nArray after deletion:\n");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}