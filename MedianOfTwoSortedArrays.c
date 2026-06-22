#include<stdio.h>

int main()
{
    int n,m;
    int i,j,k;

    scanf("%d%d",&n,&m);

    int a[n];
    int b[m];
    int c[n+m];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    i=0;
    j=0;
    k=0;

    while(i<n && j<m)
    {
        if(a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while(i<n)
    {
        c[k++] = a[i++];
    }

    while(j<m)
    {
        c[k++] = b[j++];
    }

    int size = n + m;

    if(size % 2 == 0)
    {
        float median;

        median = (c[size/2] + c[(size/2)-1]) / 2.0;

        printf("Median = %.1f",median);
    }
    else
    {
        printf("Median = %d",c[size/2]);
    }

    return 0;
}