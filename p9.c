#include<stdio.h>
void unique(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[j]==a[i])
                    c=c+1;
            }
        }
        if(c==0)
            printf("%d ",a[i]);
    }
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &a[i]);
    }
    printf("The unique elements are:\n");
    unique(a,n);
}