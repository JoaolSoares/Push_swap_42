/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:37:16 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/12/07 16:41:14 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/checker.h"

void	prepare_to_push(t_stack *stack, t_better *better)
{
	while (stack->a[0] != better->opt_a || stack->b[0] != better->opt_b)
	{
		while (better->index_a <= stack->amount_a / 2 \
			&& better->index_b <= stack->amount_b / 2 \
			&& (stack->a[0] != better->opt_a && stack->b[0] != better->opt_b))
			rotate_r(stack, 1);
		while (better->index_a > stack->amount_a / 2 \
			&& better->index_b > stack->amount_b / 2 \
			&& (stack->a[0] != better->opt_a && stack->b[0] != better->opt_b))
			rev_rotate_r(stack, 1);
		if (stack->a[0] != better->opt_a)
		{
			if (better->index_a <= stack->amount_a / 2)
				rotate_a(stack, 1);
			else
				rev_rotate_a(stack, 1);
		}
		if (stack->b[0] != better->opt_b)
		{
			if (better->index_b <= stack->amount_b / 2)
				rotate_b(stack, 1);
			else
				rev_rotate_b(stack, 1);
		}
	}
}

void	locate_better_option(t_stack *stack, t_better *better)
{
	int	index_b;
	int	next;
	int	moves;

	better->moves = stack->amount_a + stack->amount_b;
	index_b = -1;
	while (++index_b < stack->amount_b)
	{
		next = locate_next(stack->a, stack->amount_a, stack->b[index_b]);
		moves = index_b + next + 1;
		if (next > stack->amount_a / 2)
			moves += stack->amount_a - (next * 2);
		if (index_b > stack->amount_b / 2)
			moves += stack->amount_b - (index_b * 2);
		if (moves < better->moves)
		{
			better->index_a = next;
			better->index_b = index_b;
			better->opt_a = stack->a[next];
			better->opt_b = stack->b[index_b];
			better->moves = moves;
		}
	}
}

void	long_case(t_stack *stack)
{
	t_better	*better;

	better = malloc(sizeof(t_better));
	if (!better)
		exit (70);
	if (!turn_to_three(stack))
		return ;
	while (stack->amount_b > 0)
	{
		locate_better_option(stack, better);
		prepare_to_push(stack, better);
		push_a(stack, 1);
	}
	while (!verify_order(stack->a, stack->amount_a))
	{
		if (locate_smaller(stack->a, stack->amount_a) <= stack->amount_a / 2)
			rotate_a(stack, 1);
		else
			rev_rotate_a(stack, 1);
	}
}
