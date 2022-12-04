/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_case_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:11:48 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/12/04 20:14:41 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	locate_bigger(int *mtx, int size)
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

int	turn_to_three(t_stack *stack)
{
	if (!verify_order(stack->a, stack->amount_a))
	{
		while (stack->amount_a > 3)
			push_b(stack, 1);
		three_case(stack);
		return (1);
	}
	return (0);
}

int	locate_next(int *mtx, int size, int num)
{
	int	next;
	int	i;

	if (num > mtx[locate_bigger(mtx, size)])
		return (locate_smaller(mtx, size));
	else
	{
		next = locate_bigger(mtx, size);
		i = -1;
		while (++i < size)
			if ((mtx[i] > num) && ((num - mtx[i]) > (num - mtx[next])))
				next = i;
	}
	return (next);
}
