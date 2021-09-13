// implementation of the binary tree using linked list 
#include<stdio.h>
#include<stdlib.h>


// linked list node 
struct listNode{
   int data;
   struct listNode* next;
};

// traversing linked list 
void linkedListTraversal(struct listNode *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Insert a node first position of the linked list 
struct listNode * insertAtFirst(struct listNode *head, int data){
    struct listNode * ptr = (struct listNode *) malloc(sizeof(struct listNode));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}


// Tree node structure
struct treeNode
{
    int data;
    struct treeNode* right; 
    struct treeNode* left; 
};



// creating a new node 
struct treeNode*create(int data)
{
    
    struct treeNode* Tnewnode;
    Tnewnode=(struct treeNode*)malloc(sizeof(struct treeNode));
    Tnewnode->data=data;
    Tnewnode->left=NULL;
    Tnewnode->right=NULL;
    return Tnewnode;
    
};


// preorder traversal
void preOrder(struct treeNode* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// postorder traversal
void postOrder(struct treeNode* root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
// Inorder traversal
void inOrder(struct treeNode* root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int main(){
    int choice;
    struct listNode *head;
    struct listNode *second;
    struct listNode *third;
    struct listNode *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct listNode *)malloc(sizeof(struct listNode));
    second = (struct listNode *)malloc(sizeof(struct listNode));
    third = (struct listNode *)malloc(sizeof(struct listNode));
    fourth = (struct listNode *)malloc(sizeof(struct listNode));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;


    
                struct treeNode* root=create(head->data);
                struct treeNode* root1=create(second->data);
                struct treeNode* root2=create(third->data);
                struct treeNode* root3=create(fourth->data);
                
    
  
    do
    {
        printf("\nChoose the Choices Below :\n 1.Inserting a element in the tree\n 2.PreOrder Traversal \n 3.PostOrder Traversal \n 4. InOrder Traversal \n 5.Exit\n ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
          
 
    
                root -> left= root1;
                root ->right=root2;
                root1 ->left=root3;
            
                
            
            break;
            case 2:
            preOrder(root);
            break;
            case 3:
            postOrder(root);
            break;
            case 4:
            inOrder(root);
            break;
            case 5:
            exit(0);
            break;
        
        default:
        printf("Wrong Choices \n");
            break;
        }
    } while (choice!=5);
    

 
return 0;
}