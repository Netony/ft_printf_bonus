#ifndef	LIB_H
# define LIB_H
# include "libft/incs/libft.h"
# include <stdio.h>
# include <stdarg.h>

typedef struct	s_finfo
{
	int	precision;
	int	width;
	int	zero;
	int	plus;
	int	space;
	int	hash;
	int	conversion;
}	t_format;


int		ft_iseq(int a, int b);
int		ft_isin(int a, char *b);
int		ft_isneq_len(char *str, char c, int eq);
int		ft_isnin_len(char *str, char *c, int in);
char	*ft_move_eq(char *s, char c, int rev);
char	*ft_move_in(char *s, char *set, int rev);

t_list	*ft_lstfind(t_list *lst, int index);
char	*ft_lstget_str(t_list *node);
void	ft_delchar(void *str);
void	ft_lstprint_str(void *content);

char	*ft_strtok_c(char **pstr, char c);
char	*ft_strtok_set(char **pstr, char *set);

#endif
