#include<stdio.h>
void max_min(int *a, int n, int *max, int *min)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>*max)
            *max=a[i];
        if(a[i]<*min)
            *min=a[i];
    }
}
void main()
{
    int n, max, min;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    max_min(a,n,&max,&min);
    printf("Maximum Element: %d\n",max);
    printf("Minimum Element: %d\n",min);
}