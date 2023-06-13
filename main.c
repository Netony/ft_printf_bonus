#include "lib.h"

int	main(int argc, char **argv)
{
	char	*chunk;
	t_list	*buffers;
	t_list	*node;
	int		i;

	buffers = NULL;
	i = 0;
	while (*format)
	{
		if (ft_iseq(*format, '%'))
			chunk = ft_format(&(++format));
		else
			chunk = ft_strtok_c(&format, '%');
		node = ft_lstnew((void *)chunk);
		if (node == NULL)
		{
			free(chunk);
			ft_lstclear(&buffers, free);
			return (1);
		}
		ft_lstadd_back(&buffers, node);
	}
	ft_lstiter(buffers, ft_lstprint_str);
	return (0);
}

char	*ft_format(char **fptr)
{
	t_finfo	info;

	while (isin(**fptr, "+# 0"))
	{
		if (iseq(**fptr, '+'))
			info->plus = 1;
		else if (iseq(**fptr, '#'))
			info->hash = 1;
		else if (iseq(**fptr, ' '))
			info->space = 1;
		else if (iseq(**fptr, ' '))
			info->zero = 1;
		*fptr += 1;
	}
	if (isin(**fptr, "0123456789"))
		info->width = ft_atoi(*fptr);
	if (iseq(**fptr, '.'))
		info->precision = ft_getprec(fptr++);
	if (isin(**fptr, "cspdiuxX%"))
		info->conversion = *((*fptr)++);
}

int	ft_getprec(char **fptr)
{
	int	len;
	int	prec;

	len = ft_isin_len(*fptr, "0123456789", 0);
	if (len > 0)
		prec = ft_atoi(*fptr);
	else
		prec = 0;
	*fptr += len;
	return (prec);
}
