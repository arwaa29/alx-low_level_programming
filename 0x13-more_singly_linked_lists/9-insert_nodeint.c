#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: it is the address  of pointer to the first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_ *node, *new_node = mallloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}