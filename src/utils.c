/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:29:46 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/06 20:14:11 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_data	*init_struct_values(int argc, char *argv[])
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		exit (3);
	data->stack_a = malloc(sizeof(int) * (argc - 1));
	data->stack_b = malloc(sizeof(int) * (argc - 1));
	if (!data->stack_a || !data->stack_b)
	{
		free(data);
		exit (10);
	}
	data->size = -1;
	while(argv[++data->size])
		data->stack_a[data->size] = ft_atoi(argv[data->size]);
	return (data);
}
