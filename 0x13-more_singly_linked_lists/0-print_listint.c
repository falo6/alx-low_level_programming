#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
<<<<<<< HEAD
			num++
=======
			num++;
>>>>>>> c70b190852c173e20a3961f640bb1509733d6d46
			h = h->next;
		}
	}

	return (num)
}
