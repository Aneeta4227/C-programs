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
int pop()
{
    if(top==-1)
        printf("Stack Underflow\n");
    else
    {
        item=st[top];
        top--;
    }
    return(item);
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d\n",st[i]);
}
int main()
{
    int choice;
    printf("Enter size of stack\n");
    scanf("%d",&n);
    do
    {
        printf("Enter your choice\n");
        printf("Choice:\n1.Push\t2.Pop\t3.Exit\n");
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
                item=pop();
                printf("%d\n",item);
                break;
            case 3:
                break;
        }
    } while(choice!=3);
}
