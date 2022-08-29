#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *prev;

	if (!list || !((*list)->next))
		return;

	aux = (*list)->next;
	prev = *list;
	while (aux)
	{
		if (prev->n > aux->n)
		{
			aux = change_nodes(list, aux, prev);
			prev = aux->prev;
			while (prev != NULL)
			{
				if (prev->n > aux->n)
				{
					aux = change_nodes(list, aux, prev);
					prev = aux;
				}
				prev = prev->prev;
			}
		}
		prev = aux;
		aux = aux->next;
	}
}

/**
 * change_nodes - change nodes
 * @h: doubly linked list
 * @aux: node 1
 * @prev: node 2
 * Return: nodo prev in the new position
 */
listint_t *change_nodes(listint_t **h, listint_t *aux, listint_t *prev)
{
	listint_t *ant = NULL, *sig = NULL;

	if (prev->prev)
		ant = prev->prev;
	if (aux->next)
		sig = aux->next;

	if (ant)
		ant->next = aux;
	if (sig)
		sig->prev = prev;

	aux->next = prev;
	aux->prev = ant;
	if (!ant)
		*h = aux;

	prev->next = sig;
	prev->prev = aux;

	print_list(*h);

	return (aux);
}
