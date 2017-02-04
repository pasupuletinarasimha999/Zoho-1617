# Zoho-1617
#include<stdio.h>
int main()
{
int k=1,r,count,n,rem,a[10],i,r1;
printf("enter the numberof elements\n");
scanf("%d",&n);
printf("enter the numbers one by one");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	k=k*2;
}

printf("the subsets are \n");
r1=k-1;
while(r1>0)
{
	count=0;
	r=r1;
	while(r>0)
	{	
		
		rem=r%2;
		if(rem==1)
		{
			printf("%d",a[count]);
			count++;
		}
		else if(rem==0)
		{
			count++;
		}
		r=r/2;
	}
	printf("\n");
	r1--;
	
}
}
		
