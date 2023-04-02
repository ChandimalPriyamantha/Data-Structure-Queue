#include <stdio.h>
#define MAX	4

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	
	if(rear == MAX-1){
		printf("Queue is overFlow.\n"); 
	}else if(rear == -1 && front == -1){
		
		rear = front = 0;
		queue[rear] = data;
		
	}else{
		rear++;
		queue[rear] = data;
	}
}

int dequeue(){
	
	if(front == -1 && rear == -1){
		printf("Queue is underFlow.");
	}else if(front == rear){
		front = rear = 0;
	}else{
		
		printf("%d",queue[front]); 
		front++;
	}
}

void display(){
	int i;
	if(front == -1 && rear == -1){
		printf("Queue is underFlow.");
	}else{
	  
	   for(i=front; i<rear+1; i++){
	   	printf("%d ",queue[i]);
	   }	
	}
}

int main(){
	
	enqueue(3);
	enqueue(2);
	enqueue(1);
	enqueue(4);
	dequeue();
	//display();
	
	
}
