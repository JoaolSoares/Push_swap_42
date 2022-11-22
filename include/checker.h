/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:06:07 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 19:22:49 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

//	INCLUDES
# include "../lib/include/libft.h"
# include "push_swap.h"

// FREE
void	free_stack(t_stack *stack);
void	free_mtx(char **mtx);

// MAIN UTILS
void	exec_movement(t_stack *stack, char *movements);
char	**get_movements(t_stack *stack);

#endif
