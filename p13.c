#include<stdio.h>
#include<stdlib.h>
int sumMatrix(int **a, int **b, int **s, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            s[i][j]=a[i][j]+b[i][j];
    }
}
void main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    //Matrix A
    int **a=(int **)(malloc(n*sizeof(int *)));
    for(int i=0;i<n;i++)
        a[i]=(int *)(malloc(n*sizeof(int)));

    //Matrix B
    int **b=(int **)(malloc(n*sizeof(int *)));
    for(int i=0;i<n;i++)
        b[i]=(int *)(malloc(n*sizeof(int)));

    printf("Enter the elements for Matrix A:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Element: ");
            scanf("%d",*(a+i)+j);
        }
    }

    printf("Enter the elements for Matrix B:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Element: ");
            scanf("%d",*(b+i)+j);
        }
    }

    int **s=(int **)(malloc(n*sizeof(int *)));
    for(int i=0;i<n;i++)
        s[i]=(int *)(malloc(n*sizeof(int)));
    sumMatrix(a,b,s,n);
    printf("Sum:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d   ",s[i][j]);
        printf("\n");
    }
}