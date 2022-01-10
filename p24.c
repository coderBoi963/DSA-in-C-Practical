#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *a;
} s;

void display()
{
    if(s.top==-1)
        printf("Stack is empty. Nothing to display!\n");
    else{
        for(int i=s.top;i>=0;i--)
            printf("Element: %d\n",s.a[i]);
    }
}
void push()
{
    if(s.top==s.size-1)
        printf("Stack overflow\n");
    else{
        int val;
        printf("Enter the value that you want to insert: ");
        scanf("%d", &val);
        s.top=s.top+1;
        s.a[s.top]=val;
        printf("Value inserted successfully\n");
    }
}
void pop()
{
    if(s.top==-1)
        printf("Stack is empty\n");
    else{
        printf("Element deleted: %d\n",s.a[s.top]);
        s.top=s.top-1;
    }
}

void main()
{
    int flag=1, ch;
    printf("Enter the size of the stack: ");
    scanf("%d",&s.size);
    s.a=(int *)(malloc(s.size*sizeof(int)));
    s.top=-1;
    while(flag)
    {
        printf("\n1. Display Stack");
        printf("\n2. Insert element");
        printf("\n3. Delete element");
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