/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:28:16 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 18:14:47 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	locate_bigger(int *mtx, int size)
{
	int	bigger;
	int	i;

	bigger = 0;
	i = -1;
	while (++i < size)
		if (mtx[i] > mtx[bigger])
			bigger = i;
	return (bigger);
}

int	locate_smaller(int *mtx, int size)
{
	int	smaller;
	int	i;

	smaller = 0;
	i = -1;
	while (++i < size)
		if (mtx[i] < mtx[smaller])
			smaller = i;
	return (smaller);
}

void	put_next_in_the_top(t_stack *stack)
{
	int	i;
	int	next;

	i = -1;
	if (stack->b[0] > stack->a[locate_bigger(stack->a, stack->amount_a)])
		next = stack->a[locate_smaller(stack->a, stack->amount_a)];
	else
	{
		next = stack->a[locate_bigger(stack->a, stack->amount_a)];
		while (++i < stack->amount_a)
			if ((stack->a[i] > stack->b[0]) && \
				((stack->b[0] - stack->a[i]) > (stack->b[0] - next)))
				next = stack->a[i];
	}
	i = 0;
	while (stack->a[i] != next)
		i++;
	while (stack->a[0] != next)
	{
		if (i <= (stack->amount_a) / 2)
			rotate_a(stack, 1);
		else
			rev_rotate_a(stack, 1);
	}
}
