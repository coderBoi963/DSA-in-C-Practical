#include<stdio.h>
int delete(int *a, int *n, int pos)
{
    if(pos>=*n)
        return -1;
    else
    {
        for(int i=pos;i<*n-1;i++)
            a[i]=a[i+1];
        *n=*n-1;
    }
    return 1;
}
void main()
{
    int n,pos;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the position from where you want to delete the element: ");
    scanf("%d",&pos);
    int result=delete(a,&n,pos);
    if(result==-1)
        printf("Positon Value greater than array range");
    else
    {
        printf("The array after deleting the specified element is:\n");
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    }
}