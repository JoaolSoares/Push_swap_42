/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/05 17:56:59 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	INCLUDES
# include "../lib/include/libft.h"

//	STRUCTS
typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	size;

}	t_data;

//	UTILS FUNCTIONS	
t_data	*init_struct_values(int argc, char *argv[]);

//	CASES FUNCTIONS
void	identify_case(t_data *data);


#endif
