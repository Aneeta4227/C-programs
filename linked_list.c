#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
struct node *head,*temp,*prev,*newnode;
void read()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
}
void insert_front()
{
    temp=head;
    read();
    head=newnode;
    newnode->link=temp;
}
void insert_pos()
{
    int pos,i=0;
    printf("Enter the position to insert: ");
    scanf("%d",&pos);
    read();
    temp=head;
    while(i<pos)
    {
        prev=temp;
        temp=prev->link;
        i++;
    }
    prev->link=newnode;
    newnode->link=temp;
}
void insert_end()
{
    read();
    temp=head;
    while(temp!=0)
    {
        prev=temp;
        temp=temp->link;
    }
    prev->link=newnode;
    newnode->link=0;
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
int main()
{
    int n,i;
    head=0;
    printf("Enter the number of nodes to be created: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        read();
        newnode->link=0;
        if(head==0)
            head=temp=newnode;
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
    }
    insert_front();
    insert_pos();
    insert_end();
    display();
}
