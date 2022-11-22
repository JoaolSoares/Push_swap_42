/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 21:21:30 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	three_case(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
	{
		if (stack->a[1] > stack->a[2])
		{
			swap_a(stack, 1);
			rev_rotate_a(stack, 1);
		}
		else
			rotate_a(stack, 1);
	}
	if (stack->a[1] > stack->a[0] && stack->a[1] > stack->a[2])
	{
		if (stack->a[0] > stack->a[2])
			rev_rotate_a(stack, 1);
		else
		{
			rev_rotate_a(stack, 1);
			swap_a(stack, 1);
		}
	}
	if (stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1])
		if (stack->a[0] > stack->a[1])
			swap_a(stack, 1);
}

static void	long_case(t_stack *stack)
{
	if (!verify_order(stack->a, stack->amount_a))
	{
		while (stack->amount_a > 3)
			push_b(stack, 1);
		three_case(stack);
		put_next_in_the_top(stack);
		push_a(stack, 1);
	}
	while ((!verify_order(stack->a, stack->amount_a)) || \
			(verify_order(stack->a, stack->amount_a) && stack->amount_b > 0))
	{
		while (stack->amount_b > 0)
		{
			put_next_in_the_top(stack);
			push_a(stack, 1);
		}
		if (locate_smaller(stack->a, stack->amount_a) <= (stack->amount_a / 2) \
			&& !verify_order(stack->a, stack->amount_a))
			rotate_a(stack, 1);
		else
			rev_rotate_a(stack, 1);
	}
}

static void	very_long_case(t_stack *stack)
{
	
}

void	identify_case(t_stack *stack)
{
	if (stack->amount_a == 2)
		if (stack->a[0] > stack->a[1])
			swap_a(stack, 1);
	if (stack->amount_a == 3)
		three_case(stack);
	if (stack->amount_a > 3 && stack->amount_a < 65)
		long_case(stack);
	else
		very_long_case(stack);
}
