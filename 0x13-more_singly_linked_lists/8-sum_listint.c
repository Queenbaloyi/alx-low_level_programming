#include "lists.h"

/**
* sum_listint - calculates the Sum of all the data in a listint_t list
* @head: 1st node more linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
