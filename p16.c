#include<stdio.h>
int duplicate(int a[], int n)
{
    int counter=0;
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
        if(c!=0)
            counter=counter+1;
    }
    return counter;
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
    int count=duplicate(a,n);
    printf("The total number of duplicate elements are: %d",count);

}