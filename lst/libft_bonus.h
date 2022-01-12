#ifndef LIB_H
#define LIB_H
#include <libc.h>
#define NIL	0x7FFFFFFFFFFFFFFF
#ifndef err
#define err
#endif
#define IS_NIL 1

typedef char t_bool;

typedef struct      s_list
{
    struct s_list   *next;
    struct s_list   *prev;
    long			value;
	t_bool			is_nil;
}                   t_list;

typedef struct		s_position
{
	t_list	*top;
	t_list	*btm;
	t_list	*nil;
	t_list	*second;
	t_list	*btm_2nd;
}					t_position;


void bi_ring_lstadd_back(t_list *nil, t_list *new);
void bi_ring_lstadd_front(t_list *nil, t_list *new);
void bi_ring_lstclear(t_list **lst);
void bi_ring_lstdel_one(t_list *lst);
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*bi_ring_lstnew(long value);
size_t bi_ring_lstsize(t_list *lst);
t_list	*bi_ring_lst_init_nil(long val);
void	set_position(t_position *base, t_list *lst);

#endif
