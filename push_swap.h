#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}				t_stack;

typedef struct s_alg
{
	t_stack		*a;
	t_stack		*b;
}				t_alg;

char	*ft_strjoin_space(char *s1, char *s2);
int		check_args(char *arg_line);
int		check_for_int(const char *str);
int		get_arr(char *str, int **arr);
void	free_sarr(char **sarr);
int		ft_strcmp(const char *s1, const char *s2);
int		is_sorted(int *arr, int size);
t_alg	*init_stacks(int *arr, int len);
void	print_arr(int *arr, int size);
t_stack	*create_node(void);
t_stack	*parse_args_in_stack(int *args);
int		sa_sb(t_stack **head, char st);
int		pa_pb(t_stack **stack1, t_stack **stack2, char st);
int		ra_rb(t_stack **head, char st);
int		rra_rrb(t_stack **stack, char st);
int		stack_length(t_stack **stack);
int		ss(t_stack **a, t_stack **b);
int		rr(t_stack **a, t_stack **b);
int		rrr(t_stack **a, t_stack **b);
void	sort_three(t_alg *alg);
void	sort_five(t_alg *alg, int n);
void	start_sort(t_alg *alg, int len);
void	free_alg(t_alg *alg);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s);

#endif