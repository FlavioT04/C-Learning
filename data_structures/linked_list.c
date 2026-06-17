#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node* next;
} Node;

int main(void)
{

	Node root;
	
	root.x = 12;
	root.next = malloc(sizeof(Node));
	root.next->x = 4;
	root.next->next = NULL;

	printf("First: %d\n", root.x);	
	printf("Second: %d\n", root.next->x);
	
	free(root.next); 
	
	return 0;
}	
