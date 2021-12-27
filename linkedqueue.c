
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
	struct node *head,*newnode,*temp,*ptr,*preptr;
	void addnode();
	void insert();
	void delete();
	void display();
	void main()
{
int c=1,option;
while(c!=0)
{
	printf("\n***main menu***\n");
	printf("1.addnode\n");
	printf("2.insert\n");
	printf("3.delete\n");
	printf("4.display\n");
	printf("5.exit\n");
	printf("\n enter your option\n");
	scanf("%d",&option);
	switch(option)
{
	case 1:addnode();
	    break;
	case 2:insert();
	    break;
	case 3:delete();
	    break;
	case 4:display();
	    break;
	case 5:display();
	    break;
	default:
	printf("invalid operator");
}
	printf("do you want to continue(0/1):");
	scanf("%d",&c);
}
}
void addnode()
{
	int n,data,x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&n);
	newnode->data=x;
	if(head==NULL)
	{
	   head=temp=newnode;
	}
	else
	{
	 temp->link=newnode;
	 temp=newnode;
	}
	  printf("node addded successfully\n");
}

void insert()
{
	int val,data;
	ptr=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of the new node : ");
	scanf("%d",&val);
	while(ptr-newnode->data=val;
	newnode->link=ptr->link;
	ptr->link=newnode;
}
void delete()
{
  ptr=head;
  if(head->link==NULL)
   {
	printf("\n underflow\n");
   }
   else
   {
	ptr=ptr->link;
	head->link=ptr->link;
	free(ptr);
    }
}
void display()
{
    temp=head;
    while(temp->link!=NULL)
	{
	    temp=temp->link;
	    printf("%d\t",temp->data);
	}
	printf("\n");
}


	  





