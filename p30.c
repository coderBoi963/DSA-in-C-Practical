#include<stdio.h>
#include<stdlib.h>
void bubble(int *a, int n)
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
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int *a=(int *)(malloc(n*sizeof(int)));
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",a+i);
    }
    printf("Before sorting in Ascending Order:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    bubble(a,n);

    printf("\nAfter sorting in Ascending Order:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}