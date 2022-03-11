#include<stdio.h>
#define n 5
int q[n],front=-1,rear=-1;
void insert();
void delete();
void peak();
void display();
void main()
{
	int o,c=1;
	while(c==1)
	{
		printf("Enter any of the below option number\n1.Insert\n2.Delete\n3.Peak\n4.Display\n");
		scanf("%d",&o);
		switch(o)
		{
			case 1 : insert();
			break;
			case 2 : delete();
			break;
			case 3 : peak();
			break;
			case 4 : display();
			break;
			default : printf("Invalid entry");
		}
		printf("Do you want to continue(0/1)\n");
		scanf("%d",&c);
	}
}

void insert()
{
	int x;
	printf("Enter an element to insert\n");
	scanf("%d",&x);
	if(rear==n-1)
	  {
		printf("\nOverflow\n");
		//return;
	  }
	else if(front==-1 && rear==-1)
	  {
		front=rear=0;
	  }
	else
	  {
		rear++;
	  }
	q[rear]=x;
}

void delete()
{
	if(front==-1 || front>rear)
	  {
		printf("\nUnderflow\n");
	  }
	else
	  {
		printf("Deleted element is %d",q[front]);
		front++;
		if(front>rear)
		  {
			front=rear=-1;
		  }
	  }
	}

void peak()
{
	if(front==-1 || front>rear)
	  {
		printf("\nUnderflow\n");
	  }
	else
	  {
		printf("Peak element is %d",q[front]);
	  }
}

void display()
{
	if(front==-1 || front>rear)
	  {
		printf("\nUnderflow\n");
	  }
	else
	  {
		printf("Queue elements are\n");
		for(int i=front;i<=rear;i++)
		  {
			printf("%d\n",q[i]);
		  }
	  }

}


	

