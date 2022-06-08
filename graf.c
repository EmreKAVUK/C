#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define notVisited 1


struct node{
	char label[15];
	int counter;
	int state;
	struct node* neighbor[100];
	struct node* next;
};
struct node* start = NULL;
struct node* last = NULL ;
struct node* temp;
struct node* q;


void AddCity(char city[15]){
	
	struct node* current = (struct node*)malloc(sizeof(struct node));
	strcpy(current->label,city);
	current->counter = 0;
	current->state = notVisited;
	current->next = NULL;
	if (start == NULL ){
		start = current;
		last = current;
	}
	else{
	last->next = current;
	last = current;
	
	}
}

void printcity(){
q = start ;
while(q->next !=  NULL){
	printf("%s ",q->label);
	q = q->next;
}
	printf("%s ",q->label);

}

void nodeV(char letter[15] ){
	temp = start ;
	while(strcmp(temp->label, letter)!= 0){
		temp = temp->next;
	}
	q = temp;
}

void AddNeighbor(char src[15], char dest[15]){
	struct node* source ;
	nodeV(src);
	source = q ;
	struct node* destination;
	nodeV(dest);
	destination = q ;
	source->neighbor[source->counter] = destination;
	source->counter++;
	destination->neighbor[destination->counter] = source;
	destination->counter++;
}

void printneighbor(char target[15]){
	nodeV(target);
	int i;
	for(i= 0;i<q->counter;i++){
		printf(" %s",q->neighbor[i]->label);
	}
}

int main(){
int choose, city,i;
char cityA[15];
char cityV[15];
while(1 == 1){
	printf("1.Add City\n2.Print City\n3.Add Neighbor\n4.Print Neighbor\n5.Exit This app\nChoose Anything\n");
	scanf("%d",&choose);
	switch(choose){
		case 1: 
			printf("Enter your city");
			scanf("%s",&cityV);
			AddCity(cityV);
			break;
		case 2:
			printcity();
			break;
		case 3:
			printf("Which city do you want to add a neighbor to?\n");
			scanf("%s",&cityV);
			printf("How much do you want to add neighbor\n");
			scanf("%d",&choose);
			printcity();
			for(i=0;i<choose; i++){
				printf("Please enter %d.Neighbor\n",i+1);
				scanf("%s",&cityA);
				AddNeighbor(cityV,cityA);
			}
			break;
			
		case 4: 
				printf("Which city do you want to see your neighbors?\n");
				scanf("%s",&cityV);
				printneighbor(cityV);
				break;
		case 5: 
			exit(3);
			return 3;
		default :
			printf("Please Enter number 1-5 \n ");
	}
}	
system("pause");
return 0;
}
