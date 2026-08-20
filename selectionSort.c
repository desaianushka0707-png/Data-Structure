#include<stdio.h>
int main()
{
	int a[5],i,j,min,temp;
	int n=5;
	printf("\n Enter elements of array:");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
	    min=i;
      for(j=i+1;j<n;j++) 
	     {
	     	if(a[j]<a[min])
	     	{
			 min=j;
		  }  
		}
	     temp=a[i];
		 a[i]=a[min];
		 a[min]=temp;
			 
			 
		  }
		printf("\n sorted array: ");
		for(i=0;i<n;i++)
		   printf("%d",a[i]);
		   
		   return 0;   
	   
}