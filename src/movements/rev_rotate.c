/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:26:12 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 18:32:45 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
 * rra (reverse rotate a): Shift down all elements of stack a by 1.
 *		The last element becomes the first one.
 */
void	rev_rotate_a(t_stack *stack, int opt)
{
	int	i;
	int	final_element;

	if (stack->amount_a > 1)
	{
		final_element = stack->a[stack->amount_a - 1];
		i = stack->amount_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[i] = final_element;
		if (opt)
			ft_printf("rra\n");
	}
}

/*
 * rrb (reverse rotate b): Shift down all elements of stack b by 1.
 *		The last element becomes the first one.
 */
void	rev_rotate_b(t_stack *stack, int opt)
{
	int	i;
	int	final_element;

	if (stack->amount_b > 1)
	{
		final_element = stack->b[stack->amount_b - 1];
		i = stack->amount_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[i] = final_element;
		if (opt)
			ft_printf("rrb\n");
	}
}

/*
 * rrr : rra and rrb at the same time.
 */
void	rev_rotate_r(t_stack *stack, int opt)
{
	if (stack->amount_a > 1 && stack->amount_b > 1)
	{
		rev_rotate_a(stack, 0);
		rev_rotate_b(stack, 0);
		if (opt)
			ft_printf("rrr\n");
	}
}
