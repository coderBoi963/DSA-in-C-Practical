#include<stdio.h>
int sum;
float avg;
void sum_avg(int a[], int l)
{
    for(int i=0;i<l;i++)
        sum=sum+a[i];
    avg=((float)(sum))/l;
}
void main()
{
    int n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",&a[i]);
    }
    sum_avg(a, n);
    printf("Sum: %d\n",sum);
    printf("Average: %f",avg);
}