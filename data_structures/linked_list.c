#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int x;
	struct Node* next;
} Node;

int main(void){

	Node root;
	
	root.x = 12;	// root node
	root.next = malloc(sizeof(Node));
	root.next->x = 4;	// first node
	root.next->next = malloc(sizeof(Node));
	root.next->next->x = 543;	// second node
	root.next->next->next = NULL;
	
	/* iterate through linked list and print values */
	Node* curr = &root;
	while (curr != NULL){
		printf("%d\n", curr->x);
		curr = curr->next;
	}	
 
	free(root.next->next);
	free(root.next);
	
	return 0;
}	
