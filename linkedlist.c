#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data ;
    struct node *next;
};
struct node *start = NULL;
struct node *q = NULL;



void addToend(int value) {
struct node* addtoend = (struct node*)malloc(sizeof(struct node));
addtoend->data = value;
addtoend->next = NULL;
if(start == NULL ){
	start = addtoend;
}
else{
	q=start;
	while(q->next != NULL){
		q=q->next;
	}
	q->next = addtoend;
}
}

void addTobegin(int begin){
	struct node* addtobegin = (struct node*)malloc(sizeof(struct node));
	addtobegin->data = begin;
	addtobegin->next = start;
	start = addtobegin;
}

void addTobetween(int x,int y){
	struct node* addtobetween = (struct node*)malloc(sizeof(struct node));
	addtobetween->data = y;
	
	q = start;
	while(q->next->data != x){
		q= q->next;
	}
	struct node* front = (struct node*)malloc(sizeof(struct node));
	front = q->next;
	q->next = addtobetween;
	addtobetween->next = front;
}

void deleteToend(){


	q=start ;
	while(q->next->next){
		q=q->next;
	}
	free(q->next);
	q->next = NULL;
}

void deleteTobegin(){
	struct node* second = NULL;
	second = start->next;
	free(start);
	start = second;
}

void deleteTobetween(int x){
	if(start->data == x){
		deleteTobegin();
	}
	struct node *previous;
	struct node *after;
	q=start;
	while(q->next->data!=x){
		q= q->next;
	}
	if(q->next== NULL){
		deleteToend();
	}
	previous = q;
	after = q->next->next;
	free(q->next);
	previous->next = after;
} 

void print(){
	q = start;
	while(q->next != NULL){
		printf("%d--> ",q->data);
		q=q->next;
	}
	printf("%d ",q->data);
	
}








int main(){
	int choose,end,begin,x,y,between;
	while(1==1){
printf("Please choose anything\n1.Add to end\n2.Add to begin\n3.Add to between\n4.Delete to End\n5.Delete to begin\n6.Delete to between\n");
scanf("%d",&choose);
switch(choose){
	case 1: 
	         printf("Enter Your number\n");
	         scanf("%d",&end);
	         addToend(end);
	         print();
	break;
	case 2:
	         printf("Enter Your number\n");
	         scanf("%d",&begin);
	         addTobegin(begin);
	         print();
	         break;
	case 3:
	      	printf("Where do you want to add those additional numbers?\n");
		    scanf("%d",&x);
	     	printf("Which number will you add\n");
	    	scanf("%d",&y);
	    	addTobetween(x,y);
	    	print();
	    	break;
	
	case 4: 
            deleteToend();
			print();
			break;	 
			
	case 5: 
	        deleteTobegin();
	        print();
	        break;
	        
    case 6: 
           printf("Which number do you want to delete number\n");
           scanf("%d",&between);
           deleteTobetween(between);
           print();
           break;
	        
	        
}
		}
	
return 0;	
}

