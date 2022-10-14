#include<stdio.h>
int top=-1,item,n;
int st[10];
void push(int item)
{
    if(top==n-1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        st[top]=item;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack Underflow\n");
    else
    {
        item=st[top];
        top--;
    }
    printf("The popped element: %d",item);
}
void display()
{
    int i;
    if(top>-1)
    {
    for(i=top;i>=0;i--)
        printf("%d\n",st[i]);
    }
    else
        printf("The stack is empty\n");
}
int main()
{
    int choice;
    printf("Enter size of stack\n");
    scanf("%d",&n);
    do
    {
        printf("Enter your choice\n");
        printf("Choice:\n1.Push\t2.Pop\t3.Display\t4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter an item\n");
                scanf("%d",&item);
                push(item);
                display();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exited\n");
                break;
        }
    } while(choice<4);
}
