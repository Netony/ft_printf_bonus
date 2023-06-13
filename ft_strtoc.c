#include "lib.h"

static int	ft_iseq_len(char *str, char c);

char	*ft_strtoc(char **str, char c)
{
	int		len;
	char	*toc;
	
	*str = ft_move_ptr(*str, c, 0);
	len = ft_isneq_len(*str, c, 0);
	if (len == 0)
		return (NULL);
	toc = ft_substr(*str, 0, len);
	if (toc == NULL)
		return (NULL);
	*str += len;
	return (toc);
}
