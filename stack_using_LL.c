#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *top = NULL;

int main()
{
	int choice, value;
	struct node *Newnode;
	
	do{
		printf("\n----stack using linked list-----");
		printf("\n 1)Push");
	    printf("\n 2)Pop");
	    printf("\n 3)Peek");
	    printf("\n 4)Display");
	    printf("\n 5)Exit");
	    
	    printf("\n Enter your choice");
	    scanf("%d",&choice);
	    
	    switch(choice){
	    	
	    	case 1:
	    		Newnode=(struct node *)malloc(sizeof(struct node));
	    		if(Newnode==NULL)
	    		{
	    			printf("\n stack is overflow");
				}
				else
				{
				  printf("\n Enter your value");
				  scanf("%d",&value);
				  
				  Newnode->data=value;
				  Newnode->next=top;
				  top=Newnode;
				  
				  printf("\n %d pushed into stack",value);	
				}
				break;
				
			case 2:
			    if(top==NULL)
				{
					printf("\n stack is underflow");
				}	
				else
				{
					struct node *temp;
					temp=top;
					printf("\n %d poped from the stack",temp->data);
					top=top->next;
					free(temp);
				}
				break;
				
			case 3:
			    if (top==NULL)
				{
				   printf("\n stack is empty");	
				}	
				else
				{
					printf("\n %d is top element",top->data);
				}
				break;
				
		    case 4:
			    if (top==NULL)
				{
				   printf("\n stack is empty");	
				}	
				else
				{
					struct node *temp;
					temp=top;
					printf("\n stack elements are:\n");
					while (temp != NULL) {
                        printf("%d\n", temp->data);
                        temp = temp->next;
				}	
			}
			break;
			case 5:  
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice! Try again.");
		} 
       		
   }while (choice != 5);
   
    

    return 0;
}
   
 
   



    
    

