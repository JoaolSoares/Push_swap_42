/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:48:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/06 20:52:29 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	three_case(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[0] > data->stack_a[2])
	{
		if (data->stack_a[1] > data->stack_a[2])
			ft_printf("sa\nrra\n");
		else
			ft_printf("ra\n");
	}
	if (data->stack_a[1] > data->stack_a[0] && data->stack_a[1] > data->stack_a[2])
	{
		if (data->stack_a[0] > data->stack_a[2])
			ft_printf("rra\n");
		else
			ft_printf("rra\nsa\n");	
	}
	if (data->stack_a[2] > data->stack_a[0] && data->stack_a[2] > data->stack_a[1])
	{
		if (data->stack_a[0] > data->stack_a[1])
			ft_printf("sa\n");
	}
}

static void	long_case(t_data *data)
{
	
}

void	identify_case(t_data *data)
{
	if (data->size == 2)
		if (data->stack_a[0] > data->stack_a[1])
			ft_printf("sa\n");
	if (data->size == 3)
		three_case(data);
	if (data->size > 3)
		long_case(data);
}