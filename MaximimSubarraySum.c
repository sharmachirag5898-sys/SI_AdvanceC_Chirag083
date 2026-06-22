#include<stdio.h>

int main()
{
    int n,i,j;
    
    printf("Enter Size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for(i=0;i<n;i++)
    {
        int sum = 0;

        for(j=i;j<n;j++)
        {
            sum = sum + arr[j];

            if(sum > max)
            {
                max = sum;
            }
        }
    }

    printf("Maximum Sum = %d",max);

    return 0;
}