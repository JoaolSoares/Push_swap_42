/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:29:46 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/08 23:09:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
