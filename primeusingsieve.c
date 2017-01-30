# Zoho-1617
#include<stdio.h>
int main()
{
	
	int num,i,j,a[200];
	printf("enter the number \n");
	scanf("%d",&num);
	for(i=0;i<num+10;i++)
	{
		a[i]=i+2;
	}
	for(i=2;i<num+10;i++)
	{
		
		for(j=i-2;j<num+10;j=j+i)
		{	
			if(a[j]!=0)
			{	
				if(a[j]%i==0 && a[j]/i!=1)
				{
						
								a[j]=0;
						
				}
			}
		
		}
	}
	printf("the prime numbers are \n");
	for(i=0;i<num+10;i++)
	{
		if(a[i]!=0 && a[i]>num)
		{
			printf("%d \n",a[i]);
			break;
		}
	}
}
