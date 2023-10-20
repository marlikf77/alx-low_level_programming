
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: length of node in h
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h != NULL)
{
h = h->next;
nodes++;
}
return(nodes);
}
