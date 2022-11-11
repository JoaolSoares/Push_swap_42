/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/11 00:51:24 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	three_case(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
	{
		if (stack->a[1] > stack->a[2])
		{
			swap_a(stack);
			rev_rotate_a(stack);
		}
		else
			rotate_a(stack);
	}
	if (stack->a[1] > stack->a[0] && stack->a[1] > stack->a[2])
	{
		if (stack->a[0] > stack->a[2])
			rev_rotate_a(stack);
		else
		{
			rev_rotate_a(stack);
			swap_a(stack);
		}
	}
	if (stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1])
		if (stack->a[0] > stack->a[1])
			swap_a(stack);
}

static void	long_case(t_stack *stack)
{
	while (!verify_order(stack->a, stack->amount_a))
	{
		while (stack->amount_a > 3)
			push_b(stack);
		three_case(stack);
		while (stack->amount_b > 0)
		{
			put_next_in_the_top(stack);
			push_a(stack);
		}
		if (locate_smallest(stack->a, stack->amount_a) < (stack->amount_a / 2))
			rotate_a(stack);
		else
			rev_rotate_a(stack);
	}
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
