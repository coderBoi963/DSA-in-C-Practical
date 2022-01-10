#include<stdio.h>
#include<stdlib.h>
void insertion(int *a, int n)
{
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
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

    insertion(a,n);

    printf("\nAfter sorting in Ascending Order:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}