#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalpha(char a);
int					ft_isalnum(char a);
int					ft_isascii(char a);
int					ft_isprint(char a);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
size_t				ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strnstr(const char *big, const char *little, size_t len);
int					ft_tolower(char a);
int					ft_toupper(char a);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif