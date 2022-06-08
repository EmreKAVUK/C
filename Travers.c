#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node* right;
	struct node* left;
};
struct node* root = NULL;
struct node* allocatenode(int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->right = NULL;
	newNode->left = NULL ;
	return newNode;
}
struct node* add(struct node* node, int number){
if ( node == NULL )
	return allocatenode(number);
	
if(number < node->data)
	node->left = add(node->left,number);
else if(number>node->data)
node->right = add(node->right,number);
	return node;

};
void inorder(struct node* root){
	if(root != NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	
	} 
}




int main(){
	int choose;
	while(1){
		printf("Choose anything \n1.Add\n2.Inorder Travers\n");
		scanf("%d",&choose);
		switch(choose){
			case 1 : 
			printf("Enter your number\n");
			scanf("%d",&choose);
			add(root,choose);
			break;
			case 2:
				inorder(root);
				break;
			
		}
	}
	
	return 0;
}
