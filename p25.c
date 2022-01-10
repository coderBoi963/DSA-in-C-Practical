#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
struct queue *q;


int isFull()
{
    if(q->r==q->size-1)
        return 1;
    return 0;
}
int isEmpty()
{
    if(q->f==q->r){
        return 1;
    }
    return 0;
}

void display()
{
    if(isEmpty())
        printf("\nQueue is empty. It cannot be displayed\n");
    else
    {
        printf("\n");
        for(int i=q->f+1;i<=q->r;i++)
            printf("Element: %d\n",q->arr[i]);
    }
}
void insert()
{
    if(isFull()==1)
        printf("\nQueue is full\n");
    else
    {
        int val;
        printf("\nEnter the value that you want to insert: ");
        scanf("%d", &val);
        q->r=q->r+1;
        q->arr[q->r]=val;
        printf("Value inserted successfully!\n");
    }
}
int delete()
{
   int a;
    if(isEmpty()){
       a=-999;
    }
    else{
        q->f=q->f+1;
        a = q->arr[q->f]; 
    }
    return a;
}

void main()
{
    q=(struct queue *)(malloc(sizeof(struct queue)));
    int n, flag=1, ch, result;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    q->size=n;
    q->arr=(int *)(malloc(n*sizeof(int)));
    q->f=-1;
    q->r=-1;

    while(flag==1)
    {
        printf("\nSelect an operation:\n");
        printf("1 ---> Display the queue\n");
        printf("2 ---> Insert an element in the queue\n");
        printf("3 ---> Delete an element from the queue\n");
        printf("4 ---> Exit\n");
        printf("Select an option: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                display();
                break;
            case 2:
                insert();
                break;
            case 3:
                result=delete();
                if(result!=-999)
                    printf("The deleted element is: %d\n",result);
                else
                    printf("Queue is empty\n");
                break;
            case 4:
                flag=0;
                break;
            default:
                printf("Wrong choice. Try again!");
        }
    }
}