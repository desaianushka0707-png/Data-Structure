 #include<stdio.h>
 struct node{
    int data;
	struct node*next;
 }*head;
 int main()
 {
   struct node *temp,*newNode;
   int i,n;
   printf("\n Enter no. of nodes: ");
   scanf("%d",&n);
   printf("\n Enter node variables:");
   head=NULL;
    for(i=0;i<n;i++)
   {
   	newNode=malloc(sizeof(struct node));
   	scanf("%d",&newNode->data);
   	newNode->next=NULL;
   	if(head==NULL){
	   head=newNode;
	 }
	 else{
	 	temp=head;
	    while(temp->next!=NULL){
			temp=temp->next;
	    }
	  temp->next=newNode;
	}
  }
  temp=head;
  printf("\n linked list:");
  while(temp!=NULL){
  	printf("%d->",temp->data);
  	temp=temp->next;
 }
 printf(" NULL"); 
 return 0;
}
