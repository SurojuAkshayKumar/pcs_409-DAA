#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}circular;
circular* create(int data)
{
circular* newnode=(circular*)malloc(sizeof(circular));
newnode->data=data;
newnode->next=NULL;
return newnode;
}
void insert(circular **head,int data)
{
circular* newnode=create(data);
circular *left= *head;
if(*head==NULL)
{
newnode=newnode->next;
}
else{
while(left->next!=*head)
{
left=left->next;
}
left->next=newnode;
newnode_>next=*head;
}
*head=newnode;
}
circular* delete(circular*node,int data)
{
circular *temp=node;
circular *temp1=node-next;
circular *temp2=node;
while(temp->next!=NULL)
{
temp2=temp2->next;
temp=temp->next;
}
temp=node;
while(temp->next!=node)
{
if(temp->next!=node)
{
circular *p=temp1;
temp->next=p->next;
temp2=p->next;
free(p);
break;
}
temp1=temp1->next;
temp=temp->next;
}
return node;
}
void display(circular *head)
{
circular *temp=head;
while(temp->next!=head)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
int main()
{
circular *head=NULL,*p;
int ch,v,k;
do{
printf("1-for input\n2-for delete\n3-dispaly\n");
printf("enter the choice:");
scanf("%d",&ch)
switch(ch)
{
case 1:
printf("enter the data:");
scanf("%d",&v);
insert(&head,v);
break;
case 2:
printf("enter the data to delete:");
scanf("%d",&v);
head=delete(head,v);
break;
case 3:
display(head);
break;
}
}while(ch<=3);
return 0;
}
