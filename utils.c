#include "lib.h"

int	ft_isin(int a, char *b)
{
	return (ft_strchr(b, a) > 0);
}
int	ft_iseq(int a, int b)
{
	return (a == b);
}

char	*ft_move_ptr(char *s, char c, int rev)
{
	while (*s && (*s == c) == (!rev))
		s++;
	return (s);
}
int	ft_isneq_len(char *str, char c, int eq)
{
	int	len;
	int	true;

	len = 0;
	true = !eq;
	while (*str)
	{
		if (ft_iseq(*str, c) == true)
			break ;
		else
		{
			str++;
			len++;
		}
	}
	return (len);
}

int	ft_isnin_len(char *str, char *c, int in)
{
	int	len;
	int	true;

	len = 0;
	true = !in;
	while (*str)
	{
		if (ft_isin(*str, c) == true)
			break ;
		else
		{
			str++;
			len++;
		}
	}
	return (len);
}
