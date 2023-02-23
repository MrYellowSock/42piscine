#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*creation;

	creation = malloc(sizeof(t_list));
	creation->content = content;
	creation->next = NULL;
	return (creation);
}
