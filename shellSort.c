 #include<stdio.h>
 int main()
 {
	int a[5],i,j,gap,temp;
	printf("\n enter any 5 no:");
	for(i=0;i<5;i++)
	  scanf("%d",&a[i]);
	  
	for(gap=5/2;gap>0;gap=gap/2)
	  {
	   for(i=gap;i<5;i++) 
	    {
	    	temp=a[i];
	    	for(j=i;j>=gap && a[j-gap]>temp;j=j-gap)
	    	 a[j]=a[j-gap];
	    	 
	    	 a[j]=temp;
		 } 
     }
     
     printf("\n array is sorted using shell sort:");
     for(i=0;i<5;i++)
      printf("%d",a[i]);
      
      return 0;
 }