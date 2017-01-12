# Zoho-1617
#include<stdio.h>
int main()
{
	
	int n,rem=0,i,k,r;
	printf("enter the prime number \n");
	scanf("%d",&n);
	while(rem==0)
	{	   rem=1;
		    for(i=2;rem!=0&&i<=n;i++)
		    {	
            k=n+1;
			       rem=k%i;
				}
		
		n=n+1;
	}
	printf("the next value of prime is : %d \n",k);
}
