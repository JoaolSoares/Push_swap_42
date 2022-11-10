/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:28:16 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/09 23:38:22 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
 * Returns 1 if the matrix is ​​sorted.
 * Else returns 0.
 */
int	verify_order(int *mtx, int size)
{
	int	i;

	i = 0;
	while (mtx[i] < mtx[i + 1] && i < size - 1)
	{
		if (i == size - 2)
			return (1);
		i++;
	}
	return (0);
}
