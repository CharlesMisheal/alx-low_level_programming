#include "lists.h"

/**
* pop_listint - eletes the head node of a listint_t linked list
* @head: head of list
* Created by Charles Misheal
* Return: head node's data
*/

int pop_listint(listint_t **head)

{

	int h_node;

	listint_t *h;

	listint_t *curr;



	if (*head == NULL)

		return (0);



	curr = *head;



	h_node = curr->n;



	h = curr->next;



	free(curr);



	*head = h;



	return (h_node);

}
