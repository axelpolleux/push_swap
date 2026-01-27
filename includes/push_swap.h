/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:04:29 by apolleux          #+#    #+#             */
/*   Updated: 2026/01/27 18:23:38 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

// Functions
int		main(int argc, char **argv);
char	**parser(int argc, char **argv, int *size);
int		ft_atol(char *str, int *out);

// Linked list
t_node	*new_node(int value);
t_node	*make_stack(char **args);
void	clear_list(t_node *stack);
void	free_parser(char **args);

// algorithm
int		is_already_sorted(t_node *stack);
int		check_index(t_node **stack, int index_to_find);
void	stack_index(t_node *stack);
int		size_list(t_node *stack);

// sort functions
void	stack_sort(t_node **stack_a, t_node **stack_b);
void	main_sort(t_node **stack_a, t_node **stack_b);
void	sort_three(t_node **stack);
void	sort_two(t_node **stack);

// Instructions
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

// Others
#endif
