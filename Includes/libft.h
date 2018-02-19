/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 18:30:19 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 21:29:23 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# define ABS(x)	((x < 0) ? -x : x)

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_nbrchar(char *str, char c);
int				ft_sqrt(int nb);
char			**ft_split_whitespaces(char *str);
int				ft_strlen(const char *str);
char			*ft_strdup(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strmcat(char *dst, const char *src);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, \
							size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strtrim(char const *s);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strsub_free(char *s, unsigned int start, size_t len);
char			**ft_strsplit(char const *s, char c);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strstr(const char *haystack, const char *needle);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_strdel(char **as);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
int				ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
int				ft_putnbr_signed(intmax_t nb);
int				ft_putnbr_unsigned(uintmax_t nb);
void			ft_putnbr_fd(int n, int fd);
int				ft_putstr(char const *s);
void			ft_putstr_fd(char const *s, int fd);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_lenint(int n);
void			ft_bzero(void *b, size_t len);
int				ft_isspace(char c);
size_t			ft_strlcat(char *d, const char *s, size_t n);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
int				ft_digitlen(intmax_t n);
char			*ft_strrev(char *str);
char			*ft_itoh(long long n);
char			*ft_utoa(unsigned long long value, unsigned int base);
int				ft_strnbr(const char *str);
int				ft_lenint_base(uintmax_t nb, int base);
int				ft_putwchar(wchar_t c);
int				ft_putwstr(wchar_t const *s);
int				ft_wstrlen(const wchar_t *str);
wchar_t			*ft_wstrncpy(wchar_t *dst, const wchar_t *src, size_t len);
wchar_t			*ft_wstrsub(wchar_t const *s, unsigned int start, size_t len);
wchar_t			*ft_wstrnew(size_t size);
int				ft_size_wchar(wchar_t w);
wchar_t			*ft_wstrsub_free(wchar_t *s, unsigned int start, size_t len);
wchar_t			*ft_wstrdup(const wchar_t *s1);
wchar_t			*ft_wstrcpy(wchar_t *dst, const wchar_t *src);
int				ft_wstrcmp(const wchar_t *s1, const wchar_t *s2);

#endif
