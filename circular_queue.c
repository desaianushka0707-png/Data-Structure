#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int value;

    if ((rear+1)%SIZE==front) {
        printf("\n Queue overflow!!");
    } else {
        printf("\nEnter value: ");
        scanf("%d", &value);

        if (front == -1) {
            front = 0;
        }

        rear=(rear+1)%SIZE;
        queue[rear] = value;

        printf("\n%d = element is inserted", value);
    }
}

void dequeue() {
    if ( front > rear) {
        printf("\nQueue underflow!!");
    } else {
        printf("\nDeleted from queue = %d", queue[front]);
       

        if (front == rear) {
            front = rear = -1;
        }
        else{
        	front=(front+1)%SIZE;
		}
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("\nQueue is empty");
        return;
    }

    printf("\nQueue: ");

    while(1){
    	printf("\n %d",queue[i]);
    	if(i==rear){
    		break;
		}
		i=(i+1)%SIZE;
	}

    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n\n-- Queue Menu --");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting program!!");
                return 0;

            default:
                printf("\nInvalid choice!!");
        }
    }

    return 0;
}
