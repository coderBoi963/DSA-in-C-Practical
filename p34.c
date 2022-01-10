#include<stdio.h>
#include<stdlib.h>
void linear()
{
    int n,ele,flag=0,pos;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    int *a = (int *)(malloc(n * sizeof(int)));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",a+i);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag)
        printf("Element found at position: %d\n",pos);
    else
        printf("Element not found\n");
}


void binary()
{
    int n,ele,flag=0,ub,lb,mid;
    printf("Enter the range of the array: ");
    scanf("%d", &n);
    lb=0;
    ub=n-1;
    int *a = (int *)(malloc(n * sizeof(int)));
    printf("Enter the elements of the array in Ascending order:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element: ");
        scanf("%d",a+i);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&ele);

    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(a[mid]==ele)
        {
            flag=1;
            break;
        }
        else if(a[mid]<ele)
            lb=mid+1;
        else
            ub=mid-1;
    }
    if(flag)
        printf("ELement found at position: %d\n", mid);
    else
        printf("Element not found\n");

}


void main()
{
    int ch,flag=1;
    while(flag)
    {
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                linear();
                break;
            case 2:
                binary();
                break;
            case 3:
                flag=0;
                break;
            default:
            printf("Invalid Choice. Try again!\n");
                break;
        }
    }
}