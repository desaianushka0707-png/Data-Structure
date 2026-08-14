#include<stdio.h>
int main()
{
	int i,x[5],k,n,low,high,mid;
	printf("Enter any 5 no. :");
	
	for(i=0;i<5;i++)
	{
	
	  scanf("%d",&x[i]);
    }
    
    printf("Enter a key value:");
    scanf("%d",&k);
    
    n=5;
    low=0;
    high=n-1;
    while(low<=high){
    	mid=(low+high)/2;
    	if(x[mid]==k){
		    printf("\n element found",mid+1);
    	   return 0;
        }
        
         else if(k<x[mid]){
		   
		   
		   
    	       high=mid-1;
        }
        	else{
			
        		low=mid+1;
	}
}
	
	printf("\n element not found");
	return 0;
}