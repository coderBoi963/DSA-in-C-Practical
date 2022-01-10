#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
struct queue *q;

void display()
{
    if(q->f==-1 && q->r==-1)  
    {  
        printf("Queue is empty\n");  
    }  
    else  
    {
        int i=q->f;
        while(i!=q->r)
        {
            printf("Element: %d\n", q->arr[i]);
            i=(i+1)%q->size;
        }
        printf("Element: %d\n", q->arr[q->r]);
    }  
}
void insert()
{
    int val;
    if (q->f == -1 && q->r == -1)
    {
        q->f = 0;
        q->r = 0;
        printf("Enter the value that you want to insert: ");
        scanf("%d", &val);
        q->arr[q->r] = val;
        printf("Value inserted successfully\n");
    }
    else if ((q->r + 1) % q->size == q->f)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the value that you want to insert: ");
        scanf("%d", &val);
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Value inserted successfully\n");
    }
}

int delete ()
{
    int a;
    if ((q->f == -1) && (q->r == -1)) 
        a=-999;
    else if (q->f == q->r)
    {
        a=q->arr[q->f];
        q->f=-1;
        q->r=-1;
    }
    else
    {
        a=q->arr[q->f];
        q->f = (q->f + 1) % q->size;
    }
    return a;
}

void main()
{
    q = (struct queue *)(malloc(sizeof(struct queue)));
    int n, flag = 1, ch, result;
    printf("Enter the size of the circular queue: ");
    scanf("%d", &n);
    q->size = n;
    q->arr = (int *)(malloc(q->size * sizeof(int)));
    q->f = -1;
    q->r = -1;

    while (flag == 1)
    {
        printf("\nSelect an operation:\n");
        printf("1 ---> Display the queue\n");
        printf("2 ---> Insert an element in the queue\n");
        printf("3 ---> Delete an element from the queue\n");
        printf("4 ---> Exit\n");
        printf("Select an option: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            insert();
            break;
        case 3:
            result = delete ();
            if (result != -999)
                printf("The deleted element is: %d\n", result);
            else
                printf("Queue is empty\n");
            break;
        case 4:
            flag = 0;
            break;
        default:
            printf("Wrong choice. Try again!");
            break;
        }
    }
}