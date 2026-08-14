#include<stdio.h>
int main()
{
	int i,x[5],k,n;
	printf("Enter any 5 no. :");
	
	for(i=0;i<5;i++)
	{
	
	  scanf("%d",&x[i]);
    }
    
    printf("Enter a key value:");
    scanf("%d",&k);
     
     for(i=0;n-x[i];i++)
      {
      	if(x[i]==k)
      	{
		  
      	  printf("\n element is found",i+1);
      	  return 0;
        }
        
    
    }
        	printf("\n elemnt not found");
		
     	     return 0;
    
    
}