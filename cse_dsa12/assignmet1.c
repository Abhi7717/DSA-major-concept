//wap menu drive prg. to creat a binary tree, insert and delete node of the binary tree.and diplay the inorder , preorder, postorder traversal f the binary tree.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    /* data */
    int info;
    struct Node *lchild;
    struct Node *rchild;
}node;
 node *root=NULL;

node *makenode()
{
    node *nw;
    nw=(node*)malloc(sizeof(node));
    nw->lchild=NULL;
    nw->rchild=NULL;
    return nw;
}
int Insert(int data)
{
    node *nw,*p,*q;
    nw=makenode();
    nw->info=data;
    if(root==NULL)
    {
        root=nw;
    }
    else
    {
        p=root;
        while (p!=NULL)
        {
            /* code */
            q=p;
            if(p->info>data)
            p=p->lchild;
            else
            p=p->rchild;
        }
        if(q->info>data)
        {
            q->lchild=nw;
        }
        else
        q->rchild=nw;
        // }
    }

}


int delete(int data)
{
    node *p,*q;
        node *r;
    p=root;
    while(p->info!=data)
    {
        q=p;
        if(p->info>data)
        {
            p=p->lchild;
        }
        else
        p=p->rchild;
    }

    if((p->lchild!=NULL)&&(p->rchild!=NULL))
    {
        r=p->rchild;
        q=p;
        while(r->lchild!=NULL)
        {
            q=r;
            r=r->lchild;
        }
        int temp=p->info;
        p->info=r->info;
        r->rchild=temp;
        p=r;
    }


    if((p->lchild==NULL)&& (p->rchild==NULL))
    {
        if(p==q->lchild)
        q->lchild=NULL;
        else
        q->rchild=NULL;
    }
    else
    {
        if(p->lchild!=NULL){
        if(p==q->rchild)
        q->lchild=p->lchild;
        else
        q->rchild=p->lchild;
        }
        else
        {
            if(p==q->lchild)
            q->lchild=p->lchild;
            else
            q->rchild=p->rchild;
        }
    }
    // return 
}

// struct node* deleteNode(struct node* p, int key)
// {
//     // base case
//     if (p == NULL)
//         return p;
  
//     // If the key to be deleted 
//     // is smaller than the root's
//     // key, then it lies in left subtree
//     if (key < p->key)
//         p->left = deleteNode(p->left, key);
  
//     // If the key to be deleted 
//     // is greater than the root's
//     // key, then it lies in right subtree
//     else if (key > p->key)
//         p->right = deleteNode(p->right, key);
  
//     // if key is same as root's key, 
//     // then This is the node
//     // to be deleted
//     else {
//         // node with only one child or no child
//         if (p->left == NULL) {
//             struct node* temp = p->right;
//             free(p);
//             return temp;
//         }
//         else if (p->right == NULL) {
//             struct node* temp = p->left;
//             free(p);
//             return temp;
//         }
  
//         // node with two children: 
//         // Get the inorder successor
//         // (smallest in the right subtree)
//         struct node* temp = minValueNode(p->right);
  
//         // Copy the inorder 
//         // successor's content to this node
//         p->key = temp->key;
  
//         // Delete the inorder successor
//         p->right = deleteNode(p->right, temp->key);
//     }
//     // return p;
// }
  

void Inorder(node *r)
{
    if(r!=NULL)
    {
        Inorder(r->lchild);
        printf("%d ->",r->info);
        Inorder(r->rchild);
    }
}

void preorder(node *r)
{
    if(r!=NULL)
    {
        printf("%d ->",r->info);
        preorder(r->lchild);
        preorder(r->rchild);
    }
}

void postorder(node *r)
{
    if(r!=NULL)
    {
        postorder(r->lchild);
        postorder(r->rchild);
        printf("%d ->",r->info);
    }
}

int main()

{
    int i,da,c;
    printf("1. insert the data inn tree\n");
    printf("2. delete the data from the tree\n");
    printf("3. inorder traversal\n");
    printf("4. preorder traversal\n");
    printf("5. postorder traversal\n");
    do{
    printf("enter your choice\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        /* code */
        printf("enter the data to inserted\n");
        scanf("%d",&i);
        Insert(i);
     break;
    
    case 2:
        printf("enter the data to deleted\n");
        scanf("%d",&i);
        delete(i);

        break;
    case 3:
        Inorder(root);
        break;
    case 4:
        preorder(root);
        break;
    case 5:
        postorder(root);
        break;
    default:
    printf("wrong choice\n");
        break;
    }
    }while(c!=6);
    return 0;

}




// 1. insert the data inn tree
// 2. delete the data from the tree
// 3. inorder traversal
// 4. preorder traversal
// 5. postorder traversal
// enter your choice
// 1
// enter the data to inserted
// 6
// enter your choice
// 1
// enter the data to inserted
// 9
// enter your choice
// 1
// enter the data to inserted
// 7
// enter your choice
// 1
// enter the data to inserted
// 3
// enter your choice
// 1
// enter the data to inserted
// 5
// enter your choice
// 3
// 3 ->5 ->6 ->7 ->9 ->enter your choice
// 4
// 6 ->3 ->5 ->9 ->7 ->enter your choice
// 5
// 5 ->3 ->7 ->9 ->6 ->enter your choice
// 2
// enter the data to deleted
// 5
// enter your choice
// 3
// 3 ->5 ->6 ->7 ->9 ->enter your choice
// 4
// 6 ->3 ->5 ->9 ->7 ->enter your choice
// 5
// 5 ->3 ->7 ->9 ->6 ->enter your choice
// 2
// enter the data to deleted
// 6
// enter your choice
// 3
// 3 ->5 ->7 ->6 ->9 ->enter your choice
// 4
// 7 ->3 ->5 ->9 ->6 ->enter your choice
// 5
// 5 ->3 ->6 ->9 ->7 ->enter your choice
// 6
