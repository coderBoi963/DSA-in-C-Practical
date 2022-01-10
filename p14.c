#include<stdio.h>
#include<stdlib.h>
void transpose(int **a, int n)
{
    printf("Matrix after transpose:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}
void main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int **a=(int **)(malloc(n*sizeof(int *)));
    for(int i=0;i<n;i++)
        a[i]=(int *)(malloc(n*sizeof(int)));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Element: ");
            scanf("%d",*(a+i)+j);
        }
    }

    printf("Matrix before transpose:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    transpose(a,n);
}