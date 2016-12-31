# Zoho-1617
#include<stdio.h>
int main()
{
	int a[10],num=0,i,n,k;
	printf("enter the number of elements to be entered \n");
	scanf("%d",&n);
	printf("enter the array in sorted order \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched \n");
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			num++;
		}
	}
	printf("the number of times it repeated is : %d \n",num);
}
