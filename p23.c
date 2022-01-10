#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*linked;

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

void delete(int n, int m)
{
    int c=1;
    struct Node *store, *temp;
    store=linked;
    while(c<m) //slkipping m nodes
    {
        linked=linked->next;
        c=c+1;
    }
    temp=linked->next;
    c=1;
    while(c<=n) //Deleting part
    {
        struct Node *t=temp;
        temp=temp->next;
        free(t);
        c=c+1;
    }
    linked->next=temp;
    linked=store;
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
    int size,n,m;
    printf("Enter the length of the Linked list: ");
    scanf("%d",&size);
    create(size);
    printf("N: ");
    scanf("%d",&n);
    printf("M: ");
    scanf("%d",&m);
    delete(n,m);
    display(linked);
}