/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:46:25 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/10 19:28:05 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stacks(t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("------------------\n");
	while (i < stack->amount_a)
	{
		ft_printf("stack->a[%i] = %i\n", i, stack->a[i]);
		i++;
	}
	ft_printf("------------------\n");
	i = 0;
	while (i < stack->amount_b)
	{
		ft_printf("stack->b[%i] = %i\n", i, stack->b[i]);
		i++;
	}
	ft_printf("------------------\n");
}
