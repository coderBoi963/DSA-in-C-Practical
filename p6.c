#include<stdio.h>
void insert(int *a, int n, int dat, int pos)
{
    if(pos>=n)
        printf("Position value greater than range of array");
    else
    {
        a[pos]=dat;
        printf("The array after inserting the desired element at the specified position:\n");
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    }
}
void main()
{
    int n,dat,pos;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element which you want to insert: ");
    scanf("%d",&dat);
    printf("Enter the position where you want to insert: ");
    scanf("%d",&pos);
    insert(a,n,dat,pos);
    
}