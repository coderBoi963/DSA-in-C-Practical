//Use of DMA
#include<stdio.h>
#include<stdlib.h>
void largest_secondLargest(int *a, int n, int *l, int *l2)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>*l)
        {
            *l2=*l;
            *l=a[i];
        }
    }
}
void main()
{
    int n,l,l2;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int *a=(int *)(malloc(n*sizeof(int)));
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",a+i);
    }
    l=l2=a[0];
    largest_secondLargest(a,n,&l,&l2);
    printf("Largest: %d\n",l);
    printf("Second Largest: %d",l2);
}