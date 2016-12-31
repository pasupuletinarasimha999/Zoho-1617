# Zoho-1617
#include<stdio.h>

	int main()
	{
		char a[20];
		int k=0,q=0,i=0,j,n=1;
		printf("enter the string \n");
		while((a[k]=getchar())!='\n')
		{	k++;
		}
		if(k%2==1)
		{
			for(i=0;i<k/2;i++)
			{	q=0;
				for(j=i;j<k;j++)
				{
					if(a[i]==a[j+1])
					{	a[j+1]=0;
						q++;	
					}
				}
				if(q%2!=1 && n>1)
				{
					printf("false \n");
					return 0;
					
				}
				n++;
			}
			printf("true \n");
		}
		if(k%2==0)
		{
			for(i=0;i<k/2;i++)
			{
				for(j=0;j<k;j++)
				{
					if(a[i]==a[j])
					{
						q++;	
					}
				}
				if(q%2!=0)
				{
					printf("no \n");
					return 0;
				}
				
			}
			printf("yes \n");
		}
		return 0;
}
