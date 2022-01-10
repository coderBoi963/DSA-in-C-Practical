#include<stdio.h>
#include<stdlib.h>
struct dequeue{
    int size;
    int f;
    int r;
    int *a;
}d;


void display()
{
    if(d.r==d.f)
        printf("Dequeue is empty. Nothing to display!\n");
    else{
        for(int i=d.f+1;i<=d.r;i++)
            printf("Element: %d\n",d.a[i]);
    }
}
void insertFront()
{
    if(d.f==-1)
        printf("Cannot be inserted from front\n");
    else{
        int val;
        printf("Enter the value that you want to insert: ");
        scanf("%d",&val);
        d.a[d.f]=val;
        printf("Value inserted successfully\n");
        d.f=d.f-1;
    }
}
void insertRear()
{
    if(d.r==d.size-1)
        printf("Dequeue overflow\n");
    else{
        int val;
        d.r=d.r+1;
        printf("Enter the value that you want to insert: ");
        scanf("%d",&val);
        d.a[d.r]=val;
        printf("Value inserted successfully\n");
    }
}
void deleteFront()
{
   if(d.r==d.f)
    {
        d.f=-1;
        d.r=-1;
        printf("Dequeue is empty\n");
    }
    else{
        d.f=d.f+1;
        printf("Element deleted: %d\n",d.a[d.f]);
    }
}
void deleteRear()
{
    if(d.r==d.f)
    {
        d.f=-1;
        d.r=-1;
        printf("Dequeue is empty\n");
    }
    else{
        printf("Element deleted: %d\n",d.a[d.r]);
        d.r=d.r-1;
    }
}


void main()
{
    int flag=1, ch;
    printf("Enter the size of the dequeue: ");
    scanf("%d",&d.size);
    d.a=(int *)(malloc(d.size*sizeof(int)));
    d.f=-1;
    d.r=-1;
    while(flag)
    {
        printf("\n1. Display Dequeue");
        printf("\n2. Insert element from front");
        printf("\n3. Insert element from rear");
        printf("\n4. Delete element from front");
        printf("\n5. Delete element from rear");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                display();
                break;
            case 2:
                insertFront();
                break;
            case 3:
                insertRear();
                break;
            case 4:
                deleteFront();
                break;
            case 5:
                deleteRear();
                break;
            case 6:
                flag=0;
                break;
            default:
                printf("Invalid choice. Try Again!\n");
                break;
        }
    }
}