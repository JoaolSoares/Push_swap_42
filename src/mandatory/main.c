/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:11 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/12/04 23:53:56 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	identify_case(t_stack *stack)
{
	if (stack->amount_a == 2)
		if (stack->a[0] > stack->a[1])
			swap_a(stack, 1);
	if (stack->amount_a == 3)
		three_case(stack);
	if (stack->amount_a > 3)
		long_case(stack);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	arg_validations(argc, argv);
	stack = init_struct_values(argc, argv + 1);
	repeat_validation(stack);
	identify_case(stack);
	free(stack->a);
	free(stack->b);
	free(stack);
	exit(0);
}
