#ifndef		FT_H
# define		FT_H

# include <stdlib.h>
# include <unistd.h>
//int     sudoku_solve(int **num, int n);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
# define TRUE		1
# define FALSE		0

#endif
