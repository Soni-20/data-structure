#include<stdio.h>
int n,i,j,a[20][20],visited[20];
void dfs(int i);
void main()
{
	printf("\n enter the number of vertices");
	scanf("%d",&n);
	printf("\n enter the adjacency matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" \n the edge between the vertices %d-%d",i,j );
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
		dfs(0);
}
void dfs(int i)
{
	printf("%d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
	{
		if(!visited[j] && a[i][j]==1)
		{
			dfs(j);
		}
	}
}
