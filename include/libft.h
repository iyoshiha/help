/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 06:46:34 by iyoshiha          #+#    #+#             */
/*   Updated: 2022/01/23 23:29:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <libc.h>
# include "get_next_line.h"
# define NIL	0x7FFFFFFFFFFFFFFF
# define IS_NIL 1

typedef char	t_bool;
typedef int		t_swap_num;

typedef enum	e_order
{
	asc,
	desc
}				t_e_order;


typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

typedef struct      s_bi_list
{
    struct s_bi_list	*next;
    struct s_bi_list	*prev;
	long				index;
	t_bool				is_nil;
}                   t_bi_list;

typedef struct		s_sort_index
{
	int		i;
	int		j;
	int		k;
	t_swap_num	num_swaped;
	t_bool	flag;
}					t_sort_index;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void ft_lstclear(t_bi_list **lst, void (*del)(void *));
void ft_lstdelone(t_bi_list *lst, void (*del)(void *));
void ft_lstiter(t_bi_list *lst, void (*f)(void *));
t_bi_list	*ft_lstlast(t_bi_list *lst);
t_bi_list	*ft_lstmap(t_bi_list *lst, void *(*f)(void *), void (*del)(void *));
t_bi_list	*ft_lstnew(void *content);
size_t ft_lstsize(t_bi_list *lst);
void ft_lstadd_back(t_bi_list **lst, t_bi_list *new);
void ft_lstadd_front(t_bi_list **lst, t_bi_list *new);

void bi_ring_lstadd_back(t_bi_list *nil, t_bi_list *new);
void bi_ring_lstadd_front(t_bi_list *nil, t_bi_list *new);
void bi_ring_lstclear(t_bi_list **lst);
void bi_ring_lstdel_one(t_bi_list *lst);
void bi_ring_lstiter(t_bi_list *lst, void (*f)(void *));
t_bi_list	*bi_ring_lstnew(unsigned int value);
size_t bi_ring_lstsize(t_bi_list *lst);

t_bi_list	*lst_a();
t_bi_list	*lst_b();
void	bi_ring_lst_init();

int		ft_printf(const char	*format, ...);
t_swap_num	bubble_sort(int *num, int len2sort, t_e_order order);

#endif

/*
	You need to change NIL value depending on the situation.
	current value is below:
	#define NIL	0x7FFFFFFFFFFFFFFF
*/
