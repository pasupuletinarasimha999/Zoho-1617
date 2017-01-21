# Zoho-1617
#include <stdio.h>
#include<string.h>
 
char string[50], n;
int main()
{
    int i, len,j,index,start,n;
    printf("Enter the string ");
    scanf("%s", string);
    len=strlen(string);
    start=0;
    index=1;
    printf("The subsets are :\n");
    for(i=0;i<len;i++)
    {
    	printf("%c \n",string[i]);
    }
    while(n!=len)
    {
    	while(index!=len)
    	{
	    	for(i=index;i<len;i++)
	    	{
	    		for(j=start;j<index;j++)
	    		{
		    		printf("%c",string[j]);
		    	}
		    	
		    	printf("%c \n",string[i]);
	    	}
	    	index++;
	    }
	    n++;
		start++;
		index=start+1;
    }
}
