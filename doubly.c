#include<stdio.h>
#include<stdlib.h>
struct node
  {
	struct node *prev;
	int data;
	struct node *next;
  };
struct node *head,*newnode,*temp,*ptr;
void Beg()
 {
	newnode->prev = head;
	head=newnode;
	newnode->next = head->prev;
 }
void Between()
{	
	int x;
	temp=head;
	printf("Enter the node data for position");
	scanf("%d",&x);
	while(temp->data!=x)
	 {
		temp=temp->next;
	 }
	newnode->next=temp->next;
	temp->next=newnode;
	temp->next->prev=newnode;
}
void End()
{
	temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}
void DelBeg()
 {
	head=head->next;
 }
void DelBetween()
{	
	int x;
	temp=head;
	printf("Enter the node data for position");
	scanf("%d",&x);
	while(temp->data!=x)
	 {
		temp=temp->next;
	 }
	printf("asa");
	ptr=temp;
	temp->next->next->prev=ptr;
	temp->next=ptr->next->next;

}
void DelEnd()
{
	temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}
void display()
{
	temp=head;
	int count=0;
	while(temp!=0)
	  {
		printf("%d\n",temp->data);
		count++;
		temp=temp->next;
	  }
}
void addnode()
{
	int o=1,c=0;
	head=0;
	while(o==1)
	  {
		if(head==0)
		  {
			head=temp=newnode;
		  }
		else
		  {
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		  }
		printf("Do you want to continue insertion (0/1) ");
		scanf("%d",&o);
	  }
}
void CreateNode()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
}
void main()
  {
	int c=1,o,i,m;
	while(c==1)
	{
		printf("Enter any of the below option number\n1.AddNode\n2.Insert-Begining\n3.Insert-End\n4.Insert-Between\n5.Delete-Begining\n6.Delete-End\n7.Delete-Between\n8.Dispaly\n");
		scanf("%d",&o);
		newnode=(struct node *)malloc(sizeof(struct node));
		switch(o)
		{
			case 1 : 
			CreateNode();
			addnode();
			break;
			case 2 : 
			CreateNode();
			Beg(m);
			break;
			case 3 : 
			CreateNode();
			End(m);
			break;
			case 4 : 
			CreateNode();
			Between();
			break;
			case 5 : 
			DelBeg();
			break;
			case 6 : 
			DelEnd();
			break;
			case 7 :
			DelBetween();
			break;
			case 8 : display();
			break;
		}
		printf("Do you want to continue(0/1)\n");
		scanf("%d",&c);
	}	
  }
