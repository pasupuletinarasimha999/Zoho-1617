# Zoho-1617
#include <stdio.h>

int main()
{
    int i, len,j,index,start,n,a[100];
    printf("enter the number of elements \n" );
    scanf("%d",&len);
    printf("Enter the elements one by one ");
    for(i=0;i<len;i++)
    {
    	scanf("%d",&a[i]);
    }
    start=0;
    index=1;
    printf("The subsets are :\n");
    for(i=0;i<len;i++)
    {
    	printf("%d \n",a[i]);
    }
    while(n!=len)
    {
    	while(index!=len)
    	{
	    	for(i=index;i<len;i++)
	    	{
	    		for(j=start;j<index;j++)
	    		{
		    		printf("%d,",a[j]);
		    	}
		    	
		    	printf("%d \n",a[i]);
	    	}
	    	index++;
	    }
	    n++;
		start++;
		index=start+1;
    }
}
