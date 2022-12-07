/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/12/07 16:44:49 by jlucas-s         ###   ########.fr       */
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
	int	amount_a;
	int	amount_b;

}	t_stack;

typedef struct s_better
{
	int	opt_a;
	int	opt_b;
	int	index_a;
	int	index_b;
	int	moves;

}	t_better;

//	UTILS FUNCTIONS	
// validations
void	arg_validations(int argc, char *argv[]);
void	repeat_validation(t_stack *stack);
// init
t_stack	*init_struct_values(int argc, char *argv[]);
// verify
int		verify_order(int *mtx, int size);

//	CASES FUNCTIONS
void	identify_case(t_stack *stack);
void	three_case(t_stack *stack);
void	long_case(t_stack *stack);

// lONG CASE UTILS
int		locate_smaller(int *mtx, int size);
int		locate_bigger(int *mtx, int size);
int		locate_next(int *mtx, int size, int num);
int		turn_to_three(t_stack *stack);

//	MOVEMENT FUNCTIONS
// swap
void	swap_a(t_stack *stack, int opt);
void	swap_b(t_stack *stack, int opt);
void	swap_s(t_stack *stack, int opt);
// push
void	push_a(t_stack *stack, int opt);
void	push_b(t_stack *stack, int opt);
// rotate
void	rotate_a(t_stack *stack, int opt);
void	rotate_b(t_stack *stack, int opt);
void	rotate_r(t_stack *stack, int opt);
// rev_rotate
void	rev_rotate_a(t_stack *stack, int opt);
void	rev_rotate_b(t_stack *stack, int opt);
void	rev_rotate_r(t_stack *stack, int opt);

#endif
