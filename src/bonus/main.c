/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:07:55 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 19:45:50 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	char	**movements;
	int		i;

	arg_validations(argc, argv);
	stack = init_struct_values(argc, argv + 1);
	repeat_validation(stack);
	movements = get_movements(stack);
	i = -1;
	while (movements[++i])
		exec_movement(stack, movements[i]);
	if (verify_order(stack->a, stack->amount_a) && stack->amount_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_mtx(movements);
	free_stack(stack);
	exit(0);
}
