/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:11 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/06 20:06:52 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	arg_validations(int argc, char *argv[])
{
	int	i;
	
	if (argc < 2)
	{
		ft_printf("Error, invalid number of arguments\n");
		exit (1);
	}
	i = 1;
	while (argv[i])
		if (!ft_str_isnum(argv[i++]))
		{
			ft_printf("Error, arguments are not numbers\n");
			exit (2);
		}
}

int main(int argc, char *argv[])
{
	t_data	*data;

	arg_validations(argc, argv);
	
	data = init_struct_values(argc, argv + 1);
	
	identify_case(data);

	free(data->stack_a);
	free(data);
	exit (0);
}
