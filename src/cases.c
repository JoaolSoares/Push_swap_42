/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 23:39:15 by jlucas-s         ###   ########.fr       */
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

static void	long_case(t_stack *stack)
{
	if (!verify_order(stack->a, stack->amount_a))
		ft_printf("is not sorted\n");
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
