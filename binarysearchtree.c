#include<stdio.h>
#include<stdlib.h>
struct node *root = NULL;
struct node{
	int data ;
	struct node* left;
	struct node* right ;
};
struct node* AllocateNode(int value){
	struct node* createNode = (struct node*)malloc(sizeof(struct node));
	createNode->data = value ;
	createNode->left = NULL;
	createNode->right = NULL ; 
}
void InOrder(struct node* root){
	if(root != NULL){
		InOrder(root->left);
		printf("%d ",root->data);
		InOrder(root->right);
	}
}
struct node* add(struct node* node, int number){
	
	if(node == NULL)
	 return AllocateNode(number);
	if(number < node->data)
	node->left = add(node->left,number);
	else if(number > node->data)
	node->right = add(node->right,number);
}
struct node* search(int find){
	struct node* q ;
	q = root;
	while(q->data != find){
	if(q != NULL){
		printf("%d ", q->data);
	if(find < q->data){
			q = q->left;
		}
	else{
			q = q->right;
		}
		
	}
	else if(q == NULL){
		printf("This value is not exists \n ");
		return 0;
	}
	}
	printf("%d ",q->data);
	return q;
}
struct node * minValue(struct node* node){
	
	struct node* current =node;
	while(current->left != NULL)
		current = current->left;
		return current;
}
struct node* maxValue(struct node* node){
	struct node* current =node;
	while(current->right != NULL)
	current = current->right;
	return current; 
	
}
struct node* Delete(struct node* root ,int key){
	
 if(root == NULL)
	 		return NULL;
	

	 		if(root->left == NULL && root->right == NULL)
	 					return NULL;
	 					
	 		if (key < root->data)
        root->left = Delete(root->left, key);	
        	else if (key > root->data)
        root->right = Delete(root->right, key);
	 	 else
    {
       
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
 
       
        struct node* temp = minValue(root->right);
 
     
        root->data = temp->data;
 
       
        root->right = Delete(root->right, temp->data);
   } 
    return root;
}

int DLR(struct node* n){
	if(n==NULL)
		return 0;
		
	printf("%d ",n->data);
	DLR(n->left);
	DLR(n->right);
	return 1;
}

int LRD(struct node* n){
	if(n==NULL)
		return 0;
		
	LRD(n->left);
	LRD(n->right);
	printf("%d ",n->data);
}			 
	
	
int main(){
	int choose,e;
	
	root = add(root, 50);
    add(root, 30);
    add(root, 20);
    add(root, 40);
    add(root, 70);                                                   
    add(root, 60);
    add(root, 80);	
    search(70);
    struct node* max = maxValue(root);
  	printf("max %d\n",max->data);
  	struct node* min = minValue(root);
  	printf("min %d\n",min->data);

  	
	Delete(root,40);
   	InOrder(root);
   	DLR(root);
   	LRD(root);
	
	return 0;
}
