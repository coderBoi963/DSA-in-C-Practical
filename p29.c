#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*linked;

struct queue{
    int size;
    int f;
    int r;
}q;


void display()
{
    if(q.r==-1)
        printf("Dequeue is empty. Nothing to display!\n");
    else{
        struct node *ptr;
        ptr=linked;
        while(ptr!=NULL)
        {
            printf("Element: %d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
void insert()
{
    if(q.r==q.size-1)
        printf("Queue overflow\n");
    else{
        q.r=q.r+1;
        int val;
        struct node *temp, *head;
        temp=(struct node *)(malloc(sizeof(struct node)));
        printf("Enter the value to be inserted: ");
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
        if(linked==NULL)
            linked=temp;
        else{
            head=linked;
            while(linked->next!=NULL)
                linked=linked->next;
            linked->next=temp;
            linked=head;
        }
        printf("Value inserted successfully\n");
    }
}
void delete()
{
    if(q.f==q.r)
    {
        q.f=-1;
        q.r=-1;
        printf("Queue is empty\n");
    }
    else{
        printf("Element deleted: %d\n",linked->data);
        q.f=q.f+1;
        linked=linked->next;
    }
}


void main()
{
    int ch, flag=1;
    q.f=-1;
    q.r=-1;
    linked=(struct node *)(malloc(sizeof(struct node)));
    linked=NULL;
    printf("Enter the size of the queue: ");
    scanf("%d",&q.size);
    while(flag)
    {
        printf("\n1. Display");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                display();
                break;
            case 2:
                insert();
                break;
            case 3:
                delete();
                break;
            case 4:
                flag=0;
                break;
            default:
                printf("Invalid choice. Try Again!\n");
                break;
        }
    }
}