# Zoho-1617
#include<stdio.h>
int main()
{
	
	int a[6][6]={0};
	int n,k,i,j,r;
	printf("enter the matrix order n*n \n");
	scanf("%d",&n);
	printf("enter the elements one by one \n");
	r=n*n;
	i=0;
	j=n/2;
	while(r!=0)
	{	scanf("%d",&k);
		if(a[i][j]==0)
		{
			a[i][j]=k;
		}
	 	else
		{	i=i+2;
			j=j-1;
			if(j==-1)
			{
				j=n-1;
			}
			
		if(i>=n)
		{
			i=0;
			i=i+1;
		}
			
			a[i][j]=k;
		}
		i--;
		j++;
		if(i==-1)
		{
			i=n-1;
		}
		if(j==n)
		{
			j=0;
		}
		r--;
	}
	printf("the elements int the matrix are \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
		}
	}
