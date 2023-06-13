#include "lib.h"

char	*ft_strtok_c(char **pstr, char c)
{
	int		len;
	char	*toc;
	
	*pstr = ft_move_eq(*pstr, c, 0);
	len = ft_isneq_len(*pstr, c, 0);
	toc = ft_substr(*pstr, 0, len);
	if (toc == NULL)
		return (NULL);
	*pstr += len;
	return (toc);
}

char	*ft_strtok_set(char **pstr, char *set)
{
	int		len;
	char	*toc;
	
	*pstr = ft_move_in(*pstr, set, 0);
	len = ft_isnin_len(*pstr, set, 0);
	toc = ft_substr(*pstr, 0, len);
	if (toc == NULL)
		return (NULL);
	*pstr += len;
	return (toc);
}
