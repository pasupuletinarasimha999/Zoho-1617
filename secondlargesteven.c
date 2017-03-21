# Zoho-1617
#include<stdio.h>
#include<conio.h>
main()
{
 
  int k=0,l=0,a[20],i,n,j;
  printf("enter the number of elements to be entered\n");
  scanf("%d",&n);
  printf("enter the elements one by one\n");
  for( i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
      if(a[i]>k)
      {
        l=k;
        k=a[i];
      }
      else
      if(a[i]>k)
      {
        l=a[i];
      }
    }
  }
  printf("\n%d",l);
  getch();
}
