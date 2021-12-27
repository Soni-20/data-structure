#include<stdio.h>
int main(){
int a[30],b[30],r[30],n,m,i,j,k;
printf("\nenter the size of array1\n");
scanf("%d",&n);
printf("\nenter the size of array2:\n");
scanf("%d",&m);
printf("\nenter the elements in first array:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nenter the elements in second array\n");

for(j=0;j<m;j++)
{
	scanf("%d",&b[j]);
}
printf("\nelements of first array\n");

for(i=0;i<n;i++)
{
printf("%d",a[i]);
}

printf("\nelements of second array\n");

for(j=0;j<m;j++)
{
printf("%d",b[j]);
}
i=k=j=0;
while(i<n&&j<m)
{
	if(a[i]<b[j])
	{
	 r[k]=a[i];
	i++;k++;
	}
	else
	{
	r[k]=b[j];
	j++;k++;
	}
}

while(i<n)
{
	r[k++]=a[i++];
}
while(j<m)
{
	r[k++]=b[j++];
}
printf("\n");
printf("%d",k);
printf("\nmerged sorted array is\n");
for(int i=0;i<k;i++)
{
	printf("\n%d",r[i]);
}
}

