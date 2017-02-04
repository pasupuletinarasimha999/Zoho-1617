# Zoho-1617
#include<stdio.h>
int main()
{
int num,k,r,d,x,i;
printf("enter the number \n");
scanf("%d",&num);
r:	if(num%6==0)
	{
		k=previous(num-1);
		if(k==0)
		{
			printf("the next prime number is %d",num+1);
		
		}
		
	else
		{
			printf("the prime number is %d",num-1);
		
		}
	}
	else if(num%6!=0)
	{
		d=num/6;
		num=(d+1)*6;
		goto r;
	}
}
int previous(int x)
{
	int i,l=1;
if(x%2||x%3==0)
{
	l=0;
}
printf("the value of l is %d \n",l);
for(i=6;i<x/2;i=i+6)
{
	if(x%i-1||x%i+1==0)
	{
		return 0;
		l=0;
		break;
	}
	
}
if(l!=0)
{
printf("the value of return is %d \n",l);
return x;
}
else
{
printf("the value of return is %d \n",l);
return 0;a
}
}
