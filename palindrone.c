# Zoho-1617
#include<stdio.h>
#include<math.h>
int main()
{
int num,k=0,a[10],dnum,i,sum=0,l,rem,r;
printf("enter the number \n");
scanf("%d",&num);
dnum=num;
while(dnum!=0)
{
rem=dnum%10;
a[k]=rem;
dnum=dnum/10;
k++;
}
	if(k%2==0)
	{
			for(i=k-1;i>=k/2;i--)
			{
			sum=sum*10+a[i];
			}
		l=reverse(sum);
		printf("the value of sum is %d\n",sum);
		printf("the value of l is %d\n",l);
		r=pow(10,k/2);
		sum=sum*r;
		printf("the value of sum is %d\n",sum);
		sum=sum+l;
		printf("the values is %d",sum);
	}
}
int reverse(int a)
{
int rem,s=0;
while(a!=0)
{
rem=a/10;
s=s*10+rem;
a=a/10;
}
return s;
}
