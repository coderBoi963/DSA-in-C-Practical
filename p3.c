#include<stdio.h>
void copyArray(int *a, int *b,int n)
{
    for(int i=0;i<n;i++)
        b[i]=a[i];
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    copyArray(a,b,n);
    printf("The elements after copying:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}