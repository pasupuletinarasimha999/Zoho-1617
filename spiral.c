# Zoho-1617
#include<stdio.h>
int main()
{
int a[5][5],i,j,n,k;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements \n");
for(i=0;i<n;i++)
{	
	k=i;
	if(k%2==0)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	else if(k%2==1)
	{
		for(j=n-1;j>=0;j--)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
printf("the elements are \n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d \t",a[i][j]);
	}
	printf("\n");
}
}
	
