#include<stdio.h>
 #define MAX 3
 int stack[MAX];
 int top = -1;
 
 int isEmpty()
 {
    return top==-1;	
 }
 
 int isFull()
 {
 	return top==MAX-1;
	 
 }
 //PUSH operation
 void push(int value)
 {
 	if(isFull())
	 {
 	 printf("\n stack is overflow");
     }
	else
	{
	  top++;
	  stack[top]=value;
	  printf("\n %d Pushed into the stack",value);  
	  	
	}  
}
 //POP Operation
 void pop()	
 {
 	if(isEmpty())
	 {
 	 printf("\n stack is underflow");
     }
     else
     {
     	printf("\n %d poped from the stack",stack[top]);
     	top--;
	 }
 }
 
 int peek()
 {
 	if (isEmpty())
 	{
 			printf("\n Stack is empty");
 			return -1;
	 }
	 
	 return stack[top];
 }
 void display()
 {
 	int i;
 	if (top==-1)
 	{
 		printf("\n stack is empty");
 		return ;
	 }
	 printf("\n stack");
	 for(i=top;i>=0;i--)
	   printf("\n %d",stack[i]);
	 printf("\n");  
 }

 int main()
 {
 	int choice, value;
 	while (1){
 		printf("\n ----stack menu----");
 		printf("\n 1.Push");
 		printf("\n 2.Pop");
 		printf("\n 3.Peek");
 		printf("\n 4.Display");
 		printf("\n 5.Exit");
 	
 		printf("\n Enter choice");
 		scanf("%d",&choice);
     
	  switch(choice)
	 {
	 	case 1:
	 		printf("\n enter value:");
	 		scanf("%d",&value);
	 		push(value);
	 		break;
	 		
	    case 2:
		    pop();
			break;
			
	    case 3:
		    peek();
		    printf("\n top=%d",stack[top]);
		    break;
			
		
			 
		case 4:
		     display();
			 break;	 		
			
	    case 5:
		    printf("\n exit");
			return 0;
			
		default:
		    printf("\n invalid choice");							
	 }
 } 

	 return 0;
}
