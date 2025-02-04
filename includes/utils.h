#ifndef UTILS_H
# define UTILS_H

size_t  ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int	    ft_isdigit(int c);
int		ft_isalpha(int c);
int	    ft_is_special(int c);
void	ft_putstr_fd(char *s, int fd);
int 	ft_strcmp(char *s1, char *s2);

#endif
