#include<stdio.h>
int main()
{
	int a[5],i,j,key;
	int n=5;
	printf("\n Enter elements for array:");
	for(i=0;i<n;i++)
	
	  scanf("%d",&a[i]);
    
    
	for(i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
	while(j>=0 && a[j]>key)	{
	
	
	   a[j+1]=a[j];
	   j--;	
	}
	 a[j+1]=key;
 }  
	  
	  printf("\n Array is sorted using insertion sort:");
	for(i=0;i<n;i++)
	   printf("%d",a[i]);
	   
	  return 0; 
}