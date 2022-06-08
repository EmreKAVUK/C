#include<stdio.h>
#include<malloc.h>
struct node {
	int data1;
	int data2;
	struct node* right;
	struct node* left;
	struct node* middle;
};
struct node* newNode(int key1, int key2){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->right = NULL;
	temp->left = NULL ;
	temp->middle= NULL;
	temp->data1 = key1;
	temp->data2 = key2;
	return temp;
};


struct node* insert(struct node* node, int key1,int key2){
	if(node == NULL)
			return newNode(key1,key2);
		
	if(key1 > node->data1 && key1<node->data2 && key2 > node->data1 && key2<node->data2)
			node->middle = insert(node->middle,key1,key2);
	else if(key1 < node->data1 && key2 < node->data1)
			node->left = insert(node->left,key1,key2);
	else if(key1 > node->data2  && key2 > node->data2)	
			node->right = insert(node->right,key1,key2);
	return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d	%d \n", root->data1,root->data2);
        inorder(root->right);
    }
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
  
     
    while (current->left != NULL)
        current = current->left;
     
    
    return current;
}



struct node* deleteNode(struct node* root, int key1, int key2){
if(root == NULL)
	return root;
	
if(key1 < root->data1 && key2 < root->data1)
	root->left = deleteNode(root->left,key1,key2);
	
else if(key1 > root->data2 && key2 > root->data2)
	root->right = deleteNode(root->right,key1,key2);
	
else if(key1 > root->data1 && key1 < root->data2 &&  key2 > root->data1 && key2 < root->data2)
	root->middle = deleteNode(root->middle,key1,key2);
	
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
  
    
       
        struct node* temp = minValueNode(root->right);
  
        
        root->data1 = temp->data1;
   		root->data2 = temp->data2;
    
        root->right = deleteNode(root->right, temp->data1,temp->data2);
    }
    return root;
	
	
};



int main(){
	struct node *root = NULL;
    root = insert(root, 50 ,60);
    insert(root, 30, 35);
    insert(root, 20,25);
    insert(root, 40,45);
    insert(root, 70,75);
    insert(root, 60,65);
    insert(root, 80,85);
   	deleteNode(root, 20,25);
    
    inorder(root);

	return 0;
}
