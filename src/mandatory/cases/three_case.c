/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/30 18:19:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	three_case(t_stack *stack)
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
