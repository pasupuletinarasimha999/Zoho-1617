# Zoho-1617
#include<stdio.h>
int main()
{
	int n,i,m=1,rem,k=0,a;
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=n+1;m!=0;i++)
	{	a=i;
		k=0;
		rem=0;
		while(a!=0)
		{
			rem=a%10;
			k=k*10+rem;
			a=a/10;
		}
		if(i==k)
		{
			m=0;
		}
		
		
	}
	printf("the next palindrome is : %d\n",i-1);
}
