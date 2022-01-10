#include <stdio.h>
int delete (int *a, int *n, int ele)
{
    int pos=-1;
    for (int i=0; i<*n; i++)
    {
        if (a[i]==ele)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
        return pos;
    for (int i = pos; i < *n - 1; i++)
        a[i] = a[i + 1];
    *n = *n - 1;
    return 1;
}
void main()
{
    int n, ele;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &a[i]);
    }
    printf("Enter the element which you want to delete from the array: ");
    scanf("%d", &ele);
    int result = delete (a, &n, ele);
    if(result==-1)
        printf("Value not found");
    else
    {
        printf("The array after deleting the specified element is:\n");
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    }
}