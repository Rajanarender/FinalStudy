#include<stdio.h>
#include<stdlib.h>

/***********************************************************
Any Tree Traversal like PreOrder,InOrder,PostOrder can be treated as DFS[Depth First Search]
***********************************************************/

struct node
{
	int data;
	struct node *left;
	struct node *right;	
};

void preorder(struct node *root)
{
	if(root)
	{
		printf("  %d",root->data);
		preorder(root->left);		
		preorder(root->right);
	}
}

void inorder(struct node *root)
{
	if(root)
	{
		inorder(root->left);
		printf("  %d",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root)
	{
		postorder(root->left);		
		postorder(root->right);
		printf("  %d",root->data);
	}
}


int main()
{
	int n , i;
	struct node *p , *q , *root;
	printf("Enter the number of nodes");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{
		p = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->left = NULL;
		p->right = NULL;
		if(i == 0)
		{
			root = p; // root always point to the root node
		}
		else
		{	
			q = root;   // q is used to traverse the tree ,q is the root node
			while(1)
			{				
				if(p->data > q->data)
				{
					if(q->right == NULL)
						{					
						q->right = p; //root->right=p
						break;
						}
					else
						q = q->right; //for traversing
				}
				else
				{
					if(q->left == NULL)
						{						
						q->left = p;
						break;
						}
					else
						q = q->left;										
				}				
			}
			
		}
		
	}

printf("\n\n PreOrder:-");
preorder(root);  //This is DFS
printf("\n\n InOrder:-");
inorder(root); //This is BST
printf("\n\n PostOrder:-");
postorder(root);

return 0;
}
