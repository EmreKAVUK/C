#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define N 6
struct node{
	int data;
	struct node* next;
};
struct node* l[N];
struct node* allocate()
{
	struct node* n = malloc(sizeof(struct node));
	memset(n, 0, sizeof(struct node));
	return n;
}

int main(){
	memset(l, 0, sizeof(l));
	struct node* n =allocate();
	n->data =3;
	l[1]= n;
	
	n = allocate();
	n->data = 5;
	n->next = l[1]->next;
	l[1]->next = n;
	printf("1 has neighbors : ");
	while(n != NULL){
		printf("%d ",n->data);
		n= n->next;
	}
	return 0;
}
