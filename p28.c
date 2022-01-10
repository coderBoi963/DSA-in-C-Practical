#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*linked;

struct stack{
    int size;
    int top;
}s;

void display()
{
    if(linked==NULL)
        printf("Stack is empty. Nothing to display!\n");
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
void push()
{
    if(s.top==s.size-1)
        printf("Stack Overflow\n");
    else{
        int val;
        struct node *temp;
        temp=(struct node *)(malloc(sizeof(struct node)));
        printf("Enter the value that you want to insert: ");
        scanf("%d",&val);
        temp->data=val;
        temp->next=linked;
        linked=temp;
        s.top=s.top+1;
        printf("Value inserted successfully\n");
    }
}
void pop()
{
    if(linked==NULL)
        printf("Stack is empty\n");
    else{
        printf("Element deleted: %d\n",linked->data);
        s.top=s.top-1;
        linked=linked->next;
    }
}


void main()
{
    int ch, flag=1;
    s.top=-1;
    linked=(struct node *)(malloc(sizeof(struct node)));
    linked=NULL;
    printf("Enter the size of the stack: ");
    scanf("%d",&s.size);
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
                push();
                break;
            case 3:
                pop();
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