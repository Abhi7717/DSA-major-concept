#include <stdio.h>
#include <stdlib.h>
typedef struct n
{
	int info;
	struct n * next;
}node;

node* head1 = NULL;
node* head2 = NULL;
node* head3 = NULL;

node* makenode()
{
	node* nw;
	nw=(node*) malloc(sizeof(node));
	nw -> next = NULL;
	return nw;
}

node* insert(node* h)
{
	int n,d;
	node* nw;
	node* head=h;
	printf("\nEnter no of nodes to insert : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("\nEnter data : ");
		scanf("%d",&d);
		nw=makenode();
		nw->info=d;
		nw->next=head;
		head = nw;
	}
	return head;
}

void traverse(node* head)
{
	node* p;
	p=head;
	while(p!=NULL)
	{
		printf("%d -> ",p->info);
		p=p->next;
	}
	
}

node* merge(node* h1,node* h2)
{
	node* H1=h1;node* H2=h2;

	if(h1->info > h2->info)
	{
		while(h1->next!=NULL)
		{
			h1=h1->next;
		}
	
		h1->next= h2;
		return H1;
	}
	else
	{
		while(h2->next!=NULL)
		{
				h2=h2->next;
		}
		
		h2->next= h1;
		return H2;
	}	
}


int main()
{
	printf("\nEnter Linked List 1 :\n");
	head1=insert(head1);
	printf("\n");
	
	printf("\nEnter Linked List 2 :\n");
	head2=insert(head2);
	printf("\n");	

	printf("Linked List1 :\n");
	traverse(head1);
	printf("\n");
	
	printf("Linked List2 :\n");
	traverse(head2);
	printf("\n");																									
	
	head3 = merge(head1,head2);
	printf("MERGED Linked List :\n");
	traverse(head3);
	
	return 0;
}



// Enter Linked List 1 :

// Enter no of nodes to insert : 5

// Enter data : 2

// Enter data : 3

// Enter data : 4

// Enter data : 7

// Enter data : 8


// Enter Linked List 2 :

// Enter no of nodes to insert : 9

// Enter data : 1

// Enter data : 2

// Enter data :
// 3

// Enter data : 4

// Enter data : 5

// Enter data : 6

// Enter data : 7

// Enter data : 8

// Enter data : 9

// Linked List1 :
// 8 -> 7 -> 4 -> 3 -> 2 ->
// Linked List2 :
// 9 -> 8 -> 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 ->
// MERGED Linked List :
// 9 -> 8 -> 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> 8 -> 7 -> 4 -> 3 -> 2 ->