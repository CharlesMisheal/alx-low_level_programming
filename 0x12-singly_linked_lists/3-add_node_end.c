#include "lists.h"

/**
* add_node_end - add a new node at the end
* @head: head of the linked list
* @str: string
* Created by charles Misheal
* Return: address of the head
*/

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new;
	list_t *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)

		;
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{

		while (temp->next != NULL)

			temp = temp->next;

		temp->next = new;

	}

	return (*head);

}
