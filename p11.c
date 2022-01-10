#include<stdio.h>
#include<stdlib.h>
void merge(int *a, int *b, int n)
{
    int i=0, j=0;
    while(i<n && j<n)
    {
        if(a[i]>b[j])
        {
            printf("%d ",a[i]);
            i=i+1;
        }
        else
        {
            printf("%d ",b[j]);
            j=j+1;
        }
    }
    if(j>i)
    {
        for(int k=i;k<n;k++)
            printf("%d ",a[k]);
    }
    else
    {
        for(int k=j;k<n;k++)
            printf("%d ",b[k]);
    }
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int *a = (int *)(malloc(n * sizeof(int)));
    int *b = (int *)(malloc(n * sizeof(int)));
    printf("Enter the elements of the 1st array in Descending Order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", a+i);
    }
    printf("Enter the elements of the 2nd array in Descending Order:\n");
    for (int i=0; i<n; i++)
    {
        printf("Element: ");
        scanf("%d", b+i);
    }
    printf("After merging:\n");
    merge(a,b,n);
}