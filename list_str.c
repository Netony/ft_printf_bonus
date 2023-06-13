#include "lib.h"

t_list	*ft_lstfind(t_list *lst, int index)
{
	int	i;

	i = 0;
	while (i++ < index)
		lst = lst->next;
	return (lst);
}

char	*ft_lstget_str(t_list *node)
{
	return (node->content);
}

void	ft_lstprint_str(void *content)
{
	char	*str;

	str = (char *)content;
	ft_putendl_fd(str, 1);
}
