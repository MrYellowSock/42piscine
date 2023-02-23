#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list * head = *lst;
	if(lst == NULL || head == NULL)
	{
		return;
	}
	while (head != NULL) {
		t_list * nxt = head->next;
		ft_lstdelone(head, del);
		head = nxt;
	}
	*lst = 0;
}
