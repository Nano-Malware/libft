#include "libft.h"

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
int ft_lstsize(t_list *lst)

{
  t_list *tmp;
  int size;

  tmp = lst;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
    size++;
  }
  return (size);
}


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  t_list *head;
  t_list *n1;
  t_list *n2;
  t_list *n3;
  t_list *tmp;

  head = NULL;
  printf("Empty list: %d\n", ft_lstsize(head));


  n1 = ft_lstnew(NULL);
  n1 = ft_lstnew(NULL);
  n1 = ft_lstnew(NULL);
  if (!n1 || !n2 || !n3)
  {
    free(n1);
    free(n2);
    free(n3);
    return (0);
  }

  ft_lstadd_front(&head, n1);
  ft_lstadd_front(&head, n2);
  ft_lstadd_front(&head, n3);
  printf("Tree nodes: %d\n", ft_lstsize(head));

  while (head)
  {
    tmp = head->next;
    free(head);
    head = tmp;
  }
  return (0);
}
