#include<stdio.h>
#include<stdlib.h>
void selection(int *a, int n)
{
    int pos, temp;
    for (int i = 0; i < n-1; i++)
    {
        pos = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[pos])
                pos = j;
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
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

    selection(a,n);

    printf("\nAfter sorting in Ascending Order:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}