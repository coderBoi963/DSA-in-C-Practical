#include <stdio.h>
#include <stdlib.h>
void frequency(int *a, int *b, int n)
{
    for (int i=0; i<n; i++)
    {
        int count=1;
        for (int j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                b[j] = -1;
            }
        }
        if (b[i] != -1)
            b[i] = count;
    }
     for(int i=0; i<n; i++)
     {    
        if(b[i] != -1) 
            printf("%d -> %d\n", a[i], b[i]);     
    }    
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int *a = (int *)(malloc(n * sizeof(int)));
    int *b = (int *)(malloc(n * sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &a[i]);
    }
    frequency(a, b, n);
}