#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *temp, *head, *newnode;

void push()
{
int value;

newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert\n");
scanf("%d",&value);
if(head==0)
{
newnode->data=value;
newnode->next=0;
head=newnode;
}
else
{
newnode->data=value;
newnode->next=head;
head=newnode;
}
}
void pop()
{
if(head==0)
{
printf("stack is empty\n");
}
else
{
temp=head;
head=head->next;
printf("\nDeleted item is:%d\n",temp->data);
}
}
void display()
{
printf("The elements in the linked stack are:\n");
temp=head;
while(temp->next!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void main()
{
int opt,c=1;
while(c==1)
{
printf("LINKED STACK OPERATIONS\n");
printf("Enter your option:\n");
printf("-1.push\n 2.pop\n 3.display\n");
scanf("%d",&opt);
switch(opt)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
}
printf("\nDo You want to continue 0/1 ?\n");
scanf("%d",&c);
}
}
