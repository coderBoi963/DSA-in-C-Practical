#include<stdio.h>
#include<stdlib.h>
void sort(int *a, int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void merge(int *a, int *b, int *c,int n1, int n2)
{
    int count=0;
    for(int i=0;i<n1;i++)
    {
        c[count]=a[i];
        count=count+1;
    }
    for(int i=0;i<n2;i++)
    {
        c[count]=b[i];
        count=count+1;
    }
    sort(c,(n1+n2));
}
void main()
{
    int n1, n2, n;
    printf("Enter the range of the array 1: ");
    scanf("%d", &n1);
    printf("Enter the range of the array 2: ");
    scanf("%d", &n2);
    n=n1+n2;
    int *a = (int *)(malloc(n1 * sizeof(int)));
    int *b = (int *)(malloc(n2 * sizeof(int)));
    int *c = (int *)(malloc(n * sizeof(int)));
    printf("Enter the elements of the 1st array in sorted order:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element: ");
        scanf("%d", a+i);
    }
    printf("Enter the elements of the 2nd array in sorted order:\n");
    for (int i=0; i<n2; i++)
    {
        printf("Element: ");
        scanf("%d", b+i);
    }
    printf("After merging:\n");
    merge(a,b,c,n1,n2);
    for(int i=0;i<n;i++)
        printf("%d ",c[i]);
}