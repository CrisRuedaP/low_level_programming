#include "lists.h"

/**
 * print_listint - print all elements of a list.
 * @h: list of elements
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;

while (h == NULL)
{
return (0);
}
while (h != NULL)
{
printf("%d \n", h->n);
count++;
h = h->next;
}
return (count);
}
