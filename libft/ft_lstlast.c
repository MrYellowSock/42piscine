#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL || lst->next == NULL)
	{
		return (lst);
	}
	else {
		return ft_lstlast(lst->next);
	}
}
