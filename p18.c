#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*linked;

void create(int n)
{
    struct Node *start, *temp;
	printf("Enter the value of node 1: ");
	int dat;
	linked = (struct Node *)(malloc(sizeof(struct Node)));
	scanf("%d", &dat);
	linked->data=dat;
	linked->next=NULL;
	start=linked;
	for(int i=2;i <=n;i++)
	{
		int dat2;
		printf("Enter the value of node %d: ",i);
		scanf("%d",&dat2);
		temp=(struct Node *)(malloc(sizeof(struct Node)));
		temp->data=dat2;
		temp->next=NULL;

		linked->next=temp;
		linked=linked->next;
	}
	linked=start;	
}

void display(struct Node *p)
{
    if(p==NULL)
		printf("\nLinked List is empty\n\n");
	else{
    	while(p!=NULL)
    	{
        	printf("Element: %d\n",(p->data));
        	p=p->next;
    	}
	}
}
void insertFirst() 
{
    int ele;
    printf("Enter the element that you want to insert: ");
    scanf("%d", &ele);
    struct Node *ptr;
    ptr=(struct Node *)(malloc(sizeof(struct Node)));
    ptr->data=ele;
    ptr->next=linked;
    linked=ptr;
    printf("\nNode inserted successfully\n\n");
}
void insertEnd()
{
    int ele;
    printf("Enter the element that you want to insert: ");
    scanf("%d", &ele);
    struct Node *ptr, *store;
    ptr=(struct Node *)(malloc(sizeof(struct Node)));
    ptr->data=ele;
    ptr->next=NULL;
    store=linked;
    while(linked->next!=NULL)
        linked=linked->next;

    linked->next=ptr;
    linked=store;
    printf("\nNode inserted successfully\n\n");
}

void insertAfter()
{
    int after, ele, flag=0;
    printf("Enter the value after which you want to insert: ");
    scanf("%d", &after);
    printf("Enter the value to be inserted: ");
    scanf("%d", &ele);

    struct Node *newNode, *store;
    newNode=(struct Node *)(malloc(sizeof(struct Node)));
    newNode->data=ele;
    store=linked;
    while(linked!=NULL)
    {
        if(linked->data==after)
        {
            flag=1;
            newNode->next=linked->next;
            linked->next=newNode;
        }
        linked=linked->next;
    }
    if(flag==1)
        printf("\nNode inserted successfully\n\n");
    else
        printf("\nValue not found\n\n");
    linked=store;
}


void insertBefore()
{
    int before, ele, flag=0;
    printf("Enter the value before which you want to insert: ");
    scanf("%d", &before);
    printf("Enter the value to be inserted: ");
    scanf("%d", &ele);

    if (before==linked->data)
        insertFirst();
    else{
        struct Node *newNode, *head, *temp;
        newNode=(struct Node *)(malloc(sizeof(struct Node)));
        newNode->data=ele;
    
        head=linked;
        temp=linked->next;
        while(temp!=NULL)
        {
            if(temp->data==before)
            {
                flag=1;
                newNode->next=linked->next;
                linked->next=newNode;
            }
            if(flag==1)
                break;
            linked=linked->next;
            temp=temp->next;
        }
        if(flag==1)
            printf("\nNode inserted successfully\n\n");
        else
            printf("\nValue could not be found\n\n");
        linked=head;
    }
}

void deleteFirst()
{
    struct Node *deleted;
    deleted=linked;
    linked=linked->next;
    printf("\nNode deleted successfully\n\n");
}

void deleteEnd()
{
    struct Node *head;
    head=linked;
    if(linked->next==NULL)
        deleteFirst();
    else
    {
        while((linked->next)->next!=NULL)
            linked=linked->next;
        linked->next=NULL;
        linked=head;
        printf("\nNode deleted successfully\n\n");
    }
}

void deleteAfter()
{
    int ele,flag=0;;
    printf("Enter the value of the node whose after node is to be deleted: ");
    scanf("%d",&ele);
    if(ele==linked->data) //If only one node is present then it must be deleted
    {
        deleteFirst();
        flag=1;
    }
    struct Node *ptr, *temp;
    ptr=linked;
    while (linked->next!=NULL)
    {
        if(linked->data==ele)
        {
            flag=1;
            linked->next=(linked->next)->next;  
        }
        if(flag==1)
            break;
        linked=linked->next;
    }
    if(flag==1)
        printf("\nNode deleted successfully\n\n");
    else
        printf("\nValue not found\n\n");
    linked=ptr;
}

void deleteBefore()
{
    int ele,flag=0;;
    printf("Enter the value of the node whose before node is to be deleted: ");
    scanf("%d",&ele);
    if(ele==linked->data)
    {
        deleteFirst();
        flag=1;
    }
    struct Node *ptr, *temp;
    ptr=linked;
    temp=linked->next;
    while (temp!=NULL)
    {
        if((temp->next)->data==ele)
        {
            flag=1;
            linked->next=temp->next;  
        }
        if(flag==1)
            break;
        linked=linked->next;
        temp=temp->next;
    }
    if(flag==1)
        printf("\nNode deleted successfully\n\n");
    else
        printf("\nValue not found\n\n");
    linked=ptr;
}



void deleteSpecific()
{
    int ele,flag=0;;
    printf("Enter the value whose node you want to delete: ");
    scanf("%d",&ele);
    if(ele==linked->data)
    {
        deleteFirst();
        flag=1;
    }
    struct Node *ptr, *temp;
    ptr=linked;
    temp=linked->next;
    while (temp!=NULL)
    {
        if(temp->data==ele)
        {
            flag=1;
            linked->next=temp->next;  
        }
        if(flag==1)
            break;
        linked=linked->next;
        temp=temp->next;
    }
    if(flag==1)
        printf("\nNode deleted successfully\n\n");
    else
        printf("\nValue not found\n\n");
    linked=ptr;
}

void main()
{
    int n;
    printf("Enter the length of linked list: ");
    scanf("%d",&n);
    create(n);
    int ch, check=1;
    while(check==1)
    {
        printf("1 ---> Display Linked List");
        printf("\n2 ---> Insert Node at the beginning");
        printf("\n3 ---> Insert Node at the end");
        printf("\n4 ---> Insert a new node after a given node with a specific value");
        printf("\n5 ---> Insert a new node before a given node with a specific value");
        printf("\n6 ---> Delete a node at the beginning");
        printf("\n7 ---> Delete a node at the end");
        printf("\n8 ---> Delete a node after a node with a specific value.");
        printf("\n9 ---> Delete a node before a node with a specific value.");
        printf("\n10 ---> Delete a node with specific value");
        printf("\n11 ---> Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("\n");
                display(linked);
                printf("\n");
                break;
            case 2:
                insertFirst();
                break;
            case 3:
                insertEnd();
                break;
            case 4:
                insertAfter();
                break;
            case 5:
                insertBefore();
                break;
            case 6:
                deleteFirst();
                break;
            case 7:
                deleteEnd();
                break;
            case 8:
                deleteAfter();
                break;
            case 9:
                deleteBefore();
                break;
            case 10:
                deleteSpecific();
                break;
            case 11:
                check=0;
                break;
            default:
                printf("Wrong input. Try again!");
                break;
        }
    }
}