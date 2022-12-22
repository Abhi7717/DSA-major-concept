// NAYAN:
// C program for iterative postorder traversal using one
// stack
#include <stdio.h>
#include <stdlib.h>
 
// Maximum stack size
#define MAX_SIZE 100
 
// A tree node
struct Node {
    int data;
    struct Node *left, *right;
};
 
struct Node* root = NULL;

// Stack type
#define size 10
 
int top=-1, array[size];
 int i=0;
// A utility function to create a new tree node

struct Node* create()
{
    struct Node* p;
    p= (struct Node*) malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;
    return p;
}
void insert(int data)
{
    // int x;
    // printf("enter the root\n");
    // scanf("%d",&x);
    // if(x==-1)
    // {
    //     return NULL;
    // }
    // struct Node* root;
    // struct Node* lchild=maketree();
    // struct Node* rchild=maketree();
    // //root=p;
    // root->data=x;
    // root->left=lchild;
    // root->right=rchild;
    // return root;
    // // }
    struct Node *nw,*p,*q;
    nw=create();
    nw->data=data;
    if(root==NULL)
    {
        root=nw;
    }
    else
    {
        p=root;
        while(p!=NULL)
        {
            q=p;
            // 
            p=p->left;
            // 
            p=p->right;
        }
        q->left=nw;
        printf("enter the left chilf\n");
        scanf("%d",&x);
        nw->data=x;
        q->right=nw;
        printf("enter he right child\n");
        scanf("%d",&x);
        nw->data=x;
    }
    // return root;
}

// A utility function to create a stack of given size
void Push()
{
	int x;
	
	if(top==size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		top=top+1;
		array[top]=x;
	}
}
 
 void Pop()
{
	if(top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",array[top]);
		top=top-1;
	}
}
bool isEmpty()
{
    if(top==-1)
    return NULL;
}
// An iterative function to do postorder traversal of a
// given binary tree

void preorderiterative(struct Node *root)
{
    while (1)
    {
        /* code */
        if(root){
        printf("%d",root->data);
        push(root);
        root=root->left;
        }
        else
        {
            if(!isEmpty())
            {
                root=pop();
                root=root->right;
            }
            else
                break;
        }
    }
    
}
void postOrderIterative(struct Node* root)
{
    // Check for empty tree
    if (root == NULL)
        return;
 
    struct Stack* stack = createStack(MAX_SIZE);
    do {
        // Move to leftmost node
        while (root) {
            // Push root's right child and then root to
            // stack.
            if (root->right)
                push(stack, root->right);
            push(stack, root);
 
            // Set root as root's left child
            root = root->left;
        }
 
        // Pop an item from stack and set it as root
        root = pop(stack);
 
        // If the popped item has a right child and the
        // right child is not processed yet, then make sure
        // right child is processed before root
        if (root->right && peek(stack) == root->right) {
            pop(stack); // remove right child from stack
            push(stack, r); // push root back to stack
            r = root->right; // change root so that the
                                // right child is processed
                                // next
        }
        else // Else print root's data and set root as NULL
        {
            printf("%d ", root->data);
            r = NULL;
        }
    } while (!isEmpty(stack));
}
 
// Driver program to test above functions
int main()
{
    // Let us construct the tree shown in above figure
    
    // root = newNode(1);
    // root->left = newNode(2);
    // root->right = newNode(3);
    // root->left->left = newNode(4);
    // root->left->right = newNode(5);
    // root->right->left = newNode(6);
    // root->right->right = newNode(7);
    // printf("Post order traversal of binary tree is :\n");
    // printf("[");
    // postOrderIterative(root);
    // printf("]");

int d, ch;
    int a[5];
    printf("MENUE\n\n1.Insert nodes\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n");
    do
    {
        printf("\nEnter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // printf("Enter data for  5 nodes of Binary tree :\n");
            // for (int i = 0; i < 5; i++)
            // {
            //     scanf("%d", &a[i]);
            // }
            // // creating a root node using function recommended
            // struct node *p = createnode(a[0]);
            // struct node *p1 = createnode(a[1]);
            // struct node *p2 = createnode(a[2]);
            // struct node *p3 = createnode(a[3]);
            // struct node *p4 = createnode(a[4]);
            // // linking the root node 'p' with left and right children
            // p->left = p1;
            // p->right = p2;
            // p1->left = p3;
            // p1->right = p4;

            printf("Enter data for nodes of Binary tree :\n");
            scanf("%d",&d);
            insert(d);
            break;
        // case 2:
        //     printf("Inorder Expression : \n");
        //     inorder(p);
        //     break;
        // case 3:
        //     printf("preorder Expression : \n");
        //     preorder(p);
        //     break;
        case 4:
            printf("postorder Expression : \n");
            postOrderIterative(root);
            break;
        case 5:
            break;
        default:
            printf("Wtong choice");
        }

    } while (ch != 5);
 
    return 0;
}