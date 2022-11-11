/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:28:16 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/11 00:49:33 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	verify_order(int *mtx, int size)
{
	int	i;

	i = 0;
	while (mtx[i] < mtx[i + 1] && i < size - 1)
	{
		if (i == size - 2)
			return (1);
		i++;
	}
	return (0);
}

void	put_next_in_the_top(t_stack *stack)
{
	int	i;
	int	next;

	i = -1;
	next = stack->a[stack->amount_a - 1];
	while (++i < stack->amount_a)
		if ((stack->a[i] > stack->b[0]) && \
			((stack->b[0] - stack->a[i]) > (stack->b[0] - next)))
			next = stack->a[i];
	if (stack->b[0] > stack->a[stack->amount_a - 1])
		next = stack->a[0];
	i = 0;
	while (stack->a[i] != next)
		i++;
	while (stack->a[0] != next)
	{
		if (i < (stack->amount_a - 1) / 2)
			rotate_a(stack);
		else
			rev_rotate_a(stack);
	}
}

int	locate_smallest(int *mtx, int size)
{
	int	smallest;
	int	i;

	smallest = 0;
	i = -1;
	while (++i < size)
		if (mtx[i] < mtx[smallest])
			smallest = i;
	return (smallest);
}
