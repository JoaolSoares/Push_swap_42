/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 00:25:44 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	three_case(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && \
		stack->a[0] > stack->a[2])
	{
		if (stack->a[1] > stack->a[2])
			ft_printf("sa\nrra\n");
		else
			ft_printf("ra\n");
	}
	if (stack->a[1] > stack->a[0] && \
		stack->a[1] > stack->a[2])
	{
		if (stack->a[0] > stack->a[2])
			ft_printf("rra\n");
		else
			ft_printf("rra\nsa\n");
	}
	if (stack->a[2] > stack->a[0] && \
		stack->a[2] > stack->a[1])
	{
		if (stack->a[0] > stack->a[1])
			ft_printf("sa\n");
	}
}

/*
 * Função de teste. (apagar depois)
 */
static void	print_stacks(t_stack *stack)
{
	int i = 0;
	while (i < stack->amount_a)
	{
		ft_printf("stack->a[%i] = %i\n", i, stack->a[i]);
		i++;
	}
	ft_printf("------------------\n");
	i = 0;
	while (i < stack->amount_b)
	{
		ft_printf("stack->b[%i] = %i\n", i, stack->b[i]);
		i++;
	}
}

static void	long_case(t_stack *stack)
{
	push_b(stack);
	push_b(stack);
	push_b(stack);
	push_a(stack);
	swap_s(stack);
	print_stacks(stack);
}

void	identify_case(t_stack *stack)
{
	if (stack->amount_a == 2)
		if (stack->a[0] > stack->a[1])
			ft_printf("sa\n");
	if (stack->amount_a == 3)
		three_case(stack);
	if (stack->amount_a > 3)
		long_case(stack);
}
