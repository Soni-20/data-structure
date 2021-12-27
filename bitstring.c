#include<stdio.h>
void main()
{
int j,x,y,z,a[30],b[30],c[30],d[30],e[30],f[30],g[30];
printf("enter the number of elements in u");
scanf("%d",&x);
printf("enter the number of elements in A");
scanf("%d",&y);
printf("enter the number of elements in B");
scanf("%d",&z);
printf("enter the elements in u");
for(int i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements in A");
for(int i=0;i<y;i++)
{
scanf("%d",&b[i]);
}
printf("enter the elements in B");
for(int i=0;i<z;i++)
{
scanf("%d",&c[i]);
}
printf("\nthe bitstring of A is:");
for(int i=0;i<x;i++)
{
    for(int j=0;j<y;j++)
	{
		if (a[i]==b[j])
		{
	  	d[i]=1;
		break;
		}
		else
		{
		d[i]=0;
		}
		
	}
}
for(int i=0;i<x;i++)
{
	printf("%d",d[i]);
}
printf("\n");
printf("\nthe bitstring of B is:");
for(int i=0;i<x;i++)
{
    for(int j=0;j<y;j++)
	{
		if (a[i]==c[j])
		{
	  	e[i]=1;
		break;
		}
		else
		{
		e[i]=0;
		}
		
	}
}
printf("\n");
for(int i=0;i<x;i++)
{
	printf("%d",e[i]);
}
printf("\n");
printf("\n a union b is:");
for(int i=0;i<x;i++)
	{

		f[i]=d[i]|e[i];
	}
for(int i=0;i<x;i++)
{
printf("%d",f[i]);
}
printf("\n");
printf("\n a intersection b is:");
for(int i=0;i<x;i++)
	{

		g[i]=d[i]&e[i];
	}
for(int i=0;i<x;i++)
{
printf("%d",g[i]);
}
for(int i=0;i<x;i++)
{
	if(c[i]==0)
	{
	 c[i]=1;
	}
	else
	{
	 c[i]=0;
	}
}
printf("\n");
printf("\nb complement is:");
for(int i=0;i<x;i++)
{
printf("%d",c[i]);
}
printf("\n");
printf("\n a intersection b complement is\n");
for(int i=0;i<x;i++)
	{

		g[i]=d[i]&c[i];
	}
for(int i=0;i<x;i++)
{
printf("%d",g[i]);
}
}
