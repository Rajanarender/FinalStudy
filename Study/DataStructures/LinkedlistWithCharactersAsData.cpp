#include <bits/stdc++.h>
using namespace std;
//#include<unordered_set>
/* Linked list node */
struct Node {
	char data;
	struct Node* next;
};

// Function that push the element in linked list.
void push(struct Node** head, char data)
{
	// Allocate dynamic memory for newNode.
	struct Node* newNode = 
		(struct Node*)malloc(sizeof(struct Node));

	// Assign the data into newNode.
	newNode->data = data; //V.V.Imp step, No need to copy the char,Direct assignation will work

	// newNode->next assign the address of
	// head node.
	newNode->next = (*head);

	// newNode become the headNode.
	(*head) = newNode;
}

#if 0
void DetectLoop(struct Node* head)
{
	unordered_set<Node*>s;
	while(head != NULL)
	{
		if(s.find(head) != s.end())
		{
			cout<<"Loop is present,since Node is repeated\n";
			break;
		}

		s.insert(head);
		head= head->next;
	}
}
#endif
 
// Display linked list.
void printList(struct Node* head)
{
	while (head != NULL) {
		printf("%c -> ", head->data);
		head = head->next;
	}
	cout << "NULL" << endl;
}

// Drier program to test the functions
int main()
{
	// Start with empty list
	struct Node* head = NULL;

	// Using push() function to construct
	// singly linked list
	// 17->22->13->14->15
	push(&head, 'A');
	push(&head, 'B');
	push(&head, 'C');
	push(&head, 'D');
	push(&head, 'E');
#if 0
        head->next->next->next->next->next=head;
        DetectLoop(head);
#endif
	cout << "Linked list is : " << endl;

	// Call printList() function to display
	// the linked list.
	printList(head);
	return 0;
}

