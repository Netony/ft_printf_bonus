#include "lib.h"

typedef struct	s_format
{
	int	precision;
	int	width;
	int	zero;
	int	plus;
	int	space;
	int	hash;
	int	conversion;
}	t_format;

int	test(void);

// int	main(int argc, char **argv)
int	main(void)
{
	/*
	char	*format;
	char	*chunk;
	t_list	*buffers;
	t_list	*node;
	int		i;

	if (argc != 2)
		return (1);
	format = argv[1];
	buffers = NULL;
	i = 0;
	while (*format)
	{
		if (ft_iseq(*format, 'a'))
		{
			format = ft_move_pointer(format, 'a', 0);
		}
		else
		{
			chunk = ft_strtoc(&format, 'a');
			node = ft_lstnew((void *)chunk);
			if (node == NULL)
			{
				free(chunk);
				ft_lstclear(&buffers, free);
				return (1);
			}
			ft_lstadd_back(&buffers, node);
		}
	}
	ft_lstiter(buffers, ft_lstprint_str);
	return (0);
	*/
}


int	ft_format(char *format)
{
	t_format	data;

	while (ft_iseq(*format, '.'))
}

char	*ft_getpre(char **str, char c)
{
	int		len;
	char	*toc;

	len = ft_isnin_len(*str, "0123456789", 0);
	if (len == 0)
	if (len > 0)
	{
		toc = (char *)malloc(sizeof(char) * (len + 1));
		if (toc == NULL)
			return (NULL);
		ft_strlcpy(toc, *str, len + 1);
	}
	else
		toc = NULL;
	*str += len;
	return (toc);
}
