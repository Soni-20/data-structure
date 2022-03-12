#include<stdio.h>
int n,i,j,a[20][20],visited[20],q[20],f=0,r=-1;
void bfs(int v);
void main()
{
	int v;
	printf("enter the number of vertices:");
	scanf("%d",&n);
	printf("\n enter the adjacency matrices:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);	
		}
	}
	printf("\n enter the starting vertex:");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	bfs(v);
	printf("\n the node which are reachable:");
	for(i=0;i<=n;i++)
	{
		if (visited[i])
		{
			printf("%d\t",i);
		}
	}
}
	void bfs( int v)
	{
		for(i=0;i<=n;i++)
		{
			if (a[v][i] && !visited[i])
			q[++r]=i;
		}
		if(f<=r)
		{
			visited[q[f]]=1;
			bfs(q[f++]);
		}
	}
	
	

