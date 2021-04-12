#include<iostream>
#include<stdlib.h>
using namespace std;

/*
struct Node{
	int data;
	struct Node *next; //represents node pointer to the next 
};
*/

class Node{
	public:
		int data;
	Node *next;
};


//creating a temporary node and pointing it to head & pointer will continue until all values of node are printed
void print_list(Node * n){
	cout<<" \n"<<endl;
	cout<<"Printing new list..."<<endl;
	while (n!=NULL){
		cout << n->data <<" ";
		n = n->next;
	}
}


//inserting node at the start
void push(struct Node ** head_ref, int new_data){
	struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node)); //malloc function creates block of uninitialized memory
	new_node->data = new_data;
	new_node->next = (* head_ref);
	(* head_ref) = new_node; 
}


//inserting node at the end
void append(struct Node ** head_ref, int new_data) {
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * last = * head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;	
}


//inserting node at specific position
void insertAfter(struct Node * prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void deleteNode(struct Node ** head_ref, int new_data){
    if((*head_ref)->next==NULL){
        head_ref=NULL;
        return;
    }
    struct node* temp=head_ref;
    if(temp->data==x){
    	temp=temp->next;
    	*head_ref=temp;
    	return;
    }
    while(temp){
    	if(temp->data==x){
    		temp->data=temp->next->data;
    		temp->next=temp->next->next;
    		break;
    	}
    	temp=temp->next;
    }
}

	
	
int main()
{
	//created ten nodes and each node pointing to null at first
	Node *head= NULL;
	Node *second= NULL;
	Node *third= NULL;
	Node *fourth = NULL;
	Node *fifth = NULL;
	Node *sixth = NULL;
	Node *seventh = NULL;
	Node *eight = NULL;
	Node *nineth = NULL;
	Node *tenth = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	sixth = new Node();
	seventh = new Node();
	eight = new Node();
	nineth = new Node();
	tenth = new Node();
	
	//add data values and pointers to each node
			head->data = 1;
			head->next = second;
			
			second->data = 2;
			second->next = third;
			
			third->data = 3;
			third->next = fourth;
			
			fourth->data = 4;
			fourth->next = fifth;
			
			fifth->data = 5;
			fifth->next = sixth;
			
			sixth->data = 6;
			sixth->next = seventh;
			
			seventh->data = 7;
			seventh->next = eight;
			
			eight->data = 8;
			eight->next = nineth;
			
			nineth->data = 9;
			nineth->next = tenth;
			
			tenth->data = 10;
			tenth->next = NULL;
		
		
		//getting output
		print_list(head); 
	
		push(&head, 11); //inserting node at start
		print_list(head);
		
		append(&head, 12); //inserting node at end
		print_list(head);
	
		insertAfter(second,12); //inserting node at specific position
		print_list(head);
		
		delete_node(&l,2);
		print_list();
	
}
