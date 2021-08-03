#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that free the code
 * @head: node
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *aux1;

	while (head != NULL)
	{
		free(head);
		aux1 = head->next;
		head = aux1;
	}
}
