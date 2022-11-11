/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:11 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/11 00:49:38 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* 
 * [X] = feito;
 * [o] = Rever;
 * -----------------------------------------------------------------------
 * [ ] Otimizar, porque ta uma bosta isso daqui! (mas fununcia :D).
 * -----
 * [o] Ver a questão de variaveis de ambiente; ($ARG)
 *     |_ Aparentemente já funciona, mas fazer testes melhores;
 * [o] Talvez fazer uma função de free se precisar (acho que não vai);
 * -----
 * [X] Finalmente começar a fazer os algoritimos de sort;
 * [X] Verificar se tem numeros repetidos;
 * [X] Fazer tipo uma lib para cada movimento;
 * [X] Ver se a swap funciona quando tem apenas 1 ou menos de 1 elemento;
 * [X] Tentar colocar no fd de error pq fala no pdf;
 * [X] Verificar se cabe no int; (posso tentar fazer a atoi dar long int)
 * -----------------------------------------------------------------------
 */
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
