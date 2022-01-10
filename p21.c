#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*linked;

void reverse()
{
	struct Node *prev, *temp, *head;
	prev=NULL;
	head=linked;
	while(head!=NULL)
	{
		temp=head->next;
		head->next=prev;
		prev=head;
		head=temp;
	}
	linked=prev;
}

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

void create(int n)
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
}

void main()
{
    int n;
    printf("Enter the length of the Linked list: ");
    scanf("%d",&n);
    create(n);
	printf("\nBefore Reversing:\n");
	display(linked);
	reverse();
	printf("\nAfter Reversing:\n");
    display(linked);
}