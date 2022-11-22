/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:59:50 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/11/21 19:21:44 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

int	is_command(char *str)
{
	if (!ft_strncmp(str, "sa\n", 3) || !ft_strncmp(str, "sb\n", 3) || \
		!ft_strncmp(str, "ss\n", 3) || !ft_strncmp(str, "pa\n", 3) || \
		!ft_strncmp(str, "pb\n", 3) || !ft_strncmp(str, "ra\n", 3) || \
		!ft_strncmp(str, "rb\n", 3) || !ft_strncmp(str, "rr\n", 3) || \
		!ft_strncmp(str, "rra\n", 4) || !ft_strncmp(str, "rrb\n", 4) || \
		!ft_strncmp(str, "rrr\n", 4))
		return (1);
	return (0);
}

void	exec_movement(t_stack *stack, char *movement)
{
	if (!ft_strncmp(movement, "sa", 3))
		swap_a(stack, 0);
	if (!ft_strncmp(movement, "sb", 3))
		swap_b(stack, 0);
	if (!ft_strncmp(movement, "ss", 3))
		swap_s(stack, 0);
	if (!ft_strncmp(movement, "pa", 3))
		push_a(stack, 0);
	if (!ft_strncmp(movement, "pb", 3))
		push_b(stack, 0);
	if (!ft_strncmp(movement, "ra", 3))
		rotate_a(stack, 0);
	if (!ft_strncmp(movement, "rb", 3))
		rotate_b(stack, 0);
	if (!ft_strncmp(movement, "rr", 3))
		rotate_r(stack, 0);
	if (!ft_strncmp(movement, "rra", 3))
		rev_rotate_a(stack, 0);
	if (!ft_strncmp(movement, "rrb", 3))
		rev_rotate_b(stack, 0);
	if (!ft_strncmp(movement, "rrr", 3))
		rev_rotate_r(stack, 0);
}

char	**get_movements(t_stack *stack)
{
	char	*line;
	char	*all_lines;
	char	**commands;

	all_lines = ft_strdup("");
	line = get_next_line(STDIN_FILENO);
	while (line)
	{
		if (!is_command(line))
		{
			get_next_line(-1);
			free(line);
			free(all_lines);
			free_stack(stack);
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(40);
		}
		all_lines = ft_strjoin(all_lines, line);
		free(line);
		line = get_next_line(STDIN_FILENO);
	}
	free(line);
	commands = ft_split(all_lines, '\n');
	free(all_lines);
	return (commands);
}
