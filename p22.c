#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*linked1, *linked2;

void display(struct Node *ptr)
{
	if(ptr==NULL)
		return;
	else{
    	while(ptr!=NULL)
    	{
        	printf("Element: %d\n",ptr->data);
        	ptr=ptr->next;
    	}
	}
}

void append()
{
    struct Node *head;
    head=linked1;
    while(linked1->next!=NULL)
        linked1=linked1->next;
    linked1->next=linked2;
    linked1=head;
}

struct Node* create(int n, struct Node *linked)
{
	struct Node *head, *temp;
	printf("Enter the value of node 1: ");
	int dat,dat2;
	linked = (struct Node *)(malloc(sizeof(struct Node)));
	scanf("%d", &dat);
	linked->data=dat;
	linked->next=NULL;
	head=linked;
	for(int i=2;i<=n;i++)
	{
		printf("Enter the value of node %d: ",i);
		scanf("%d",&dat2);
		temp=(struct Node *)(malloc(sizeof(struct Node)));
		temp->data=dat2;
		temp->next=NULL;
		linked->next=temp;
		linked=linked->next;
	}
	linked=head;
    return linked;
}

void main()
{
    int n1, n2;
    printf("Enter the length of the 1st Linked list: ");
    scanf("%d",&n1);
    linked1=create(n1, linked1);
    printf("Enter the length of the 2nd Linked list: ");
    scanf("%d",&n2);
    linked2=create(n2, linked2);
    append();
    display(linked1);
}