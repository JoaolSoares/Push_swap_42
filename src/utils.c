/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:29:46 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 21:51:49 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ------------- INIT ------------- */

t_stack	*init_struct_values(int argc, char *argv[])
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		exit (10);
	stack->a = malloc(sizeof(int) * (argc - 1));
	stack->b = malloc(sizeof(int) * (argc - 1));
	if (!stack->a || !stack->b)
	{
		if (stack->a && !stack->b)
			free(stack->a);
		free(stack);
		exit(11);
	}
	stack->amount_a = -1;
	while (argv[++stack->amount_a])
		stack->a[stack->amount_a] = ft_atoi(argv[stack->amount_a]);
	stack->amount_b = 0;
	return (stack);
}

/* ---------- VALIDATIONS ---------- */

void	arg_validations(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		exit(1);
	i = 1;
	while (argv[i])
	{
		if (!ft_str_isnum(argv[i]))
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(2);
		}
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i++]) < -2147483648)
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(3);
		}
	}
}

void	repeat_validation(t_stack *stack)
{	
	int	i;
	int	j;

	i = -1;
	while (++i < stack->amount_a)
	{
		j = -1;
		while (++j < stack->amount_a)
		{
			if (stack->a[j] == stack->a[i] && j != i)
			{
				free(stack->a);
				free(stack->b);
				free(stack);
				ft_putstr_fd("Error\n", STDERR_FILENO);
				exit(4);
			}
		}
	}
}
