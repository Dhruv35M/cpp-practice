#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct LinkedList {
	__int32 data;
	struct LinkedList *next;
};

typedef struct LinkedList LinkedList;

LinkedList *newNode(__int32);
void insert_front(LinkedList **, __int32);
void insert_last(LinkedList **, __int32);
bool remove_front(LinkedList **);
bool remove_last(LinkedList **);
void print_linked_list(LinkedList **);

int main(int argc, char const *argv[]) {
	printf("Hello, World -- Welcome to LinkedList!\n");

	LinkedList *head = NULL;

	print_linked_list(&head);

	for (int t = 10; t > 0; t--) insert_front(&head, t * t);
	for (int t = 115; t <= 125; t++) insert_last(&head, t);
	print_linked_list(&head);

	for (int u = 0; u < 5; u++) remove_front(&head);
	for (int u = 0; u < 5; u++) remove_last(&head);
	print_linked_list(&head);

	return 0;
}

LinkedList *newNode(__int32 data) {
	LinkedList *temp = (LinkedList *)malloc(sizeof(LinkedList));
	temp->data = data;
	temp->next = NULL;

	return temp;
}

void print_linked_list(LinkedList **head) {
	if (*head == NULL) {
		printf("Linkedlist is empty...\n");
		return;
	}

	LinkedList *temp = *head;
	printf("Printing linkedlist--\n");
	do {
		printf("%d ", temp->data);
		temp = temp->next;
	} while (temp != NULL);
	printf("\n");
}

void insert_front(LinkedList **head, __int32 data) {
	if (*head == NULL) {
		*head = newNode(data);
		return;
	}

	LinkedList *temp = *head;
	*head = newNode(data);
	(*head)->next = temp;
}

void insert_last(LinkedList **head, __int32 data) {
	if (*head == NULL) {
		*head = newNode(data);
		return;
	}

	LinkedList *temp = *head;
	while (temp->next != NULL) temp = temp->next;
	temp->next = newNode(data);
}

bool remove_front(LinkedList **head) {
	if (*head == NULL) return false;

	LinkedList *temp = *head;
	*head = temp->next;
	free(temp);
	return true;
}

bool remove_last(LinkedList **head) {
	if (*head == NULL) return false;

	LinkedList *temp0 = *head;
	LinkedList *temp1 = temp0->next;

	while (temp1->next != NULL) {
		temp0 = temp1;
		temp1 = temp1->next;
	}

	free(temp1);
	temp0->next = NULL;
	return true;
}
