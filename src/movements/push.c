/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:26 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 00:18:32 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
 * pa (push a): Take the first element of the b and put it at the top of a.
 *		Do nothing if b is empty.
 */
void	push_a(t_stack *stack)
{
	int	temp_a;
	int	i;

	if (stack->amount_b > 0)
	{
		stack->amount_b--;
		stack->amount_a++;
		i = stack->amount_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		while (++i < stack->amount_b)
			stack->b[i] = stack->b[i + 1];
		ft_printf("pa\n");
	}
}

/*
 * pb (push b): Take the first element of the a and put it at the top of b.
 *		Do nothing if a is empty.
 */
void	push_b(t_stack *stack)
{
	int	temp_b;
	int	i;

	if (stack->amount_a > 0)
	{
		stack->amount_a--;
		stack->amount_b++;
		i = stack->amount_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		while (++i < stack->amount_a)
			stack->a[i] = stack->a[i + 1];
		ft_printf("pb\n");
	}
}
