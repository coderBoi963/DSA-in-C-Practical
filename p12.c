#include<stdio.h>
#include<stdlib.h>
struct polynomial{
    int n; //Number of terms in the polynomial
    int *a;
}x1, x2, sum;
void sumOfPoly()
{
    sum.n=(x1.n>x2.n)?x1.n:x2.n;
    sum.a=(int *)(malloc(sum.n*sizeof(int)));
    for(int i=0;i<sum.n;i++)
    {
        if(i>x1.n)
            sum.a[i]=x2.a[i];
        else if(i>x2.n)
            sum.a[i]=x1.a[i];
        else
            sum.a[i]=x1.a[i]+x2.a[i];

    }
    for(int i=0;i<sum.n;i++)
        printf("%d ", sum.a[i]);
}
void main()
{
    printf("Enter the number of terms in polynomial 1: ");
    scanf("%d", &x1.n);
    printf("Enter the number of terms in polynomial 2: ");
    scanf("%d", &x2.n);
    x1.a=(int *)(malloc(x1.n*sizeof(int)));
    x2.a=(int *)(malloc(x2.n*sizeof(int)));
    printf("Polynomial 1\n");
    for(int i=0;i<x1.n;i++)
    {
        printf("Term %d: ",i);
        scanf("%d",x1.a+i);
    }
    printf("Polynomial 2\n");
    for(int i=0;i<x2.n;i++)
    {
        printf("Term %d: ",i);
        scanf("%d",x2.a+i);
    }
    sumOfPoly();
}