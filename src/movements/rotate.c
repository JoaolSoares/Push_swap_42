/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:10:50 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 18:33:03 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
 * ra (rotate a): Shift up all elements of stack a by 1.
 *		The first element becomes the last one.
 */
void	rotate_a(t_stack *stack, int opt)
{
	int	i;
	int	firts_element;

	if (stack->amount_a > 1)
	{
		firts_element = stack->a[0];
		i = -1;
		while (++i < stack->amount_a - 1)
			stack->a[i] = stack->a[i + 1];
		stack->a[i] = firts_element;
		if (opt)
			ft_printf("ra\n");
	}
}

/*
 * rb (rotate b): Shift up all elements of stack b by 1.
 *		The first element becomes the last one.
 */
void	rotate_b(t_stack *stack, int opt)
{
	int	i;
	int	firts_element;

	if (stack->amount_b > 1)
	{
		firts_element = stack->b[0];
		i = -1;
		while (++i < stack->amount_b - 1)
			stack->b[i] = stack->b[i + 1];
		stack->b[i] = firts_element;
		if (opt)
			ft_printf("rb\n");
	}
}

/*
 * rr : ra and rb at the same time.
 */
void	rotate_r(t_stack *stack, int opt)
{
	if (stack->amount_a > 1 && stack->amount_b > 1)
	{
		rotate_a(stack, 0);
		rotate_b(stack, 0);
		if (opt)
			ft_printf("rr\n");
	}	
}
