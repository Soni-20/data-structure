#include<stdio.h>
#define n 5
int s[n],top=-1;
void push();
void pop();
void Top();
void display();
void main()
{
int o,c=1;
while(c==1)
{
	printf("Enter any of the below option number\n1.push\n2.pop\n3.top\n4.display\n");
	scanf("%d",&o);
	switch(o)
	{
		case 1 : push();
		break;
		case 2 : pop();
		break;
		case 3 : Top();
		break;
		case 4 : display();
		break;
	}
	printf("Do you want to continue(0/1)\n");
	scanf("%d",&c);
}
}

void push()
{
int x;
printf("Enter an element to push\n");
scanf("%d",&x);
if(top==n-1)
{
	printf("\nOverflow\n");
}
else
{
	top++;
	s[top]=x;
}
}

void pop()
{
if(top==-1)
{
	printf("\nUnderflow\n");
}
else
{
	printf("Popped element is %d",s[top]);
	top--;
}
}

void Top()
{
if(top==-1)
{
	printf("\nUnderflow\n");
}
else
{
	printf("Top element is %d",s[top]);
}
}

void display()
{
if(top==-1)
{
	printf("\nUnderflow\n");
}
else
{
	printf("Stack elements are\n");
	for(int i=top;i>=0;i--)
	{
		printf("%d\n",s[i]);
	}
}

}

