/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:55:34 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 18:33:17 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
 * sa (swap a): Swap the first 2 elements at the top of stack a.
 *			Do nothing if there is only one or no elements.
 */
void	swap_a(t_stack *stack, int opt)
{
	int	temp;

	if (stack->amount_a > 1)
	{
		temp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = temp;
		if (opt)
			ft_printf("sa\n");
	}
}

/*
 * sb (swap b): Swap the first 2 elements at the top of stack b.
 *			Do nothing if there is only one or no elements.
 */
void	swap_b(t_stack *stack, int opt)
{
	int	temp;

	if (stack->amount_b > 1)
	{
		temp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = temp;
		if (opt)
			ft_printf("sb\n");
	}
}

/*
 * ss : sa and sb at the same time.
 */
void	swap_s(t_stack *stack, int opt)
{
	if (stack->amount_b > 1 && stack->amount_a > 1)
	{
		swap_a(stack, 0);
		swap_b(stack, 0);
		if (opt)
			ft_printf("sa\n");
	}
}
