#include "push_swap.h"
#include "get_next_line.h"

static int	do_par(t_alg *alg, char *cmd)
{
	if (ft_is_same(cmd, "sa\n"))
		return (sa_sb(&alg->a, 0));
	else if (ft_is_same(cmd, "sb\n"))
		return (sa_sb(&alg->b, 0));
	else if (ft_is_same(cmd, "ss\n"))
		return (ss(&alg->b, &alg->b, 0));
	else if (ft_is_same(cmd, "pa\n"))
		return (pa_pb(&alg->b, &alg->a, 0));
	else if (ft_is_same(cmd, "pb\n"))
		return (pa_pb(&alg->a, &alg->b, 0));
	else if (ft_is_same(cmd, "ra\n"))
		return (ra_rb(&alg->a, 0));
	else if (ft_is_same(cmd, "rb\n"))
		return (ra_rb(&alg->b, 0));
	else if (ft_is_same(cmd, "rr\n"))
		return (rr(&alg->a, &alg->b, 0));
	else if (ft_is_same(cmd, "rra\n"))
		return (rra_rrb(&alg->a, 0));
	else if (ft_is_same(cmd, "rrb\n"))
		return (rra_rrb(&alg->b, 0));
	else if (ft_is_same(cmd, "rrr\n"))
		return (rrr(&alg->a, &alg->b, 0));
	else 
		return (0);
}

static int	start_check(t_alg *alg)
{
	char *cmd;

	cmd = get_next_line(0);
	if (!cmd)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (cmd)
	{
		if (!do_par(alg, cmd))
		{
			write(1, "Error\n", 6);
			//free(cmd);
			return (0);
		}
		free(cmd);
		cmd = get_next_line(0);
	}
	free(cmd);
	if (is_stack_sorted(alg->a) && !alg->b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*arg_str;
	int		*args;
	int		size;
	t_alg	*alg;

	if (argc < 2)
		return (0);
	arg_str = get_arg_line(argc, argv);
	if (!check_args(arg_str))
	{
		write(1, "Error\n", 6);
		free(arg_str);
		return (0);
	}
	size = get_arr(arg_str, &args);
	free(arg_str);
	if (size < 2)
		return (0);
	if (!is_sorted(args, size))
	{		
		alg = init_stacks(args, size);
		start_check(alg);
		free_alg(alg);
	}
	return (0);
}