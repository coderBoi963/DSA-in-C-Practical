#include<stdio.h>
void reverse(int *a, int l)
{
    int temp;
    for(int i=0;i<l/2;i++)
    {
        temp=a[i];
        a[i]=a[l-1-i];
        a[l-i-1]=temp;
    }
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    reverse(a, n);
    printf("The reversed array is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}