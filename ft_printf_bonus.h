#ifndef	LIB_H
# define LIB_H
# include <stdio.h>
# include "libft/libft.h"
# include "get_next_line/sources/get_next_line_bonus.h"
# include <stdarg.h>

char	*ft_move_ptr(char *s, char c, int rev);
int		ft_iseq(int a, int b);
int		ft_isin(int a, char *b);
int		ft_isneq_len(char *str, char c, int eq);
int		ft_isnin_len(char *str, char *c, int in);

t_list	*ft_lstfind(t_list *lst, int index);
char	*ft_lstget_str(t_list *node);
void	ft_delchar(void *str);
void	ft_lstprint_str(void *content);

char	*ft_strtoc(char **str, char c);

#endif
