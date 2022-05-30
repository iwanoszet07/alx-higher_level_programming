#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: singly list to check
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
  listint_t *tortoise;
  listint_t *hare;

  if (list == NULL)
    return (0);
  tortoise = list;
  hare = list;
  while (hare->next != NULL && hare->next->next != NULL)
  {
    tortoise = tortoise->next;
    hare = hare->next->next;
    if (tortoise == hare)
    {
      tortoise = list;
      while (tortoise != hare)
      {
        tortoise = tortoise->next;
        hare = hare->next;
      }
      return (1);
    }
  }
  return (0);
}
