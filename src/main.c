/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:11 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 00:20:38 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* 
 * [X] = feito;
 * [o] = Rever;
 * ----------------------------------------------------------------------------------
 * [ ] Fazer tipo uma lib para cada movimento;
 * [ ] Ver se a swap funciona quando tem apenas 1 ou menos de 1 elemento;
 * [ ] Verificar se tem numeros repetidos;
 * 
 * [o] Ver a questão de variaveis de ambiente e como o programa recebe isso; ($ARG)
 *     |_ Aparentemente já funciona, mas fazer testes melhores;
 * [o] Talvez fazer uma função de free se precisar (acho que não vai);
 * 
 * [X] Tentar colocar no fd de error pq fala no pdf;
 * [X] Verificar se cabe no int; (posso tentar fazer a atoi dar long int)
 * ----------------------------------------------------------------------------------
 */

static void	arg_validations(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(1);
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_str_isnum(argv[i]))
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(2);
		}
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i++]) < -2147483648)
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(3);
		}
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	arg_validations(argc, argv);
	stack = init_struct_values(argc, argv + 1);
	identify_case(stack);
	free(stack->a);
	free(stack->b);
	free(stack);
	exit(0);
}
