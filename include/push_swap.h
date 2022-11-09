/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 00:14:20 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	INCLUDES
# include "../lib/include/libft.h"

//	STRUCTS
typedef struct s_stack
{
	int	*a;
	int	*b;
	int amount_a;
	int amount_b;

}	t_stack;

//	UTILS FUNCTIONS	
t_stack	*init_struct_values(int argc, char *argv[]);

//	CASES FUNCTIONS
void	identify_case(t_stack *stack);

//	MOVEMENT FUNCTIONS
// swap
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_s(t_stack *stack);
// push
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
// rotate
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_r(t_stack *stack);
// rev_rotate


#endif
