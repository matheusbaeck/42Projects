/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:03:06 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/04/05 16:31:05 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

// typedef struct s_list
// {
// 	int				**stacks;
// 	int				stack;
// 	int				*end;
// 	int				mod;
// 	struct s_list	*next;
// }					moves_list;

//MOVES
int	other(int nb);
int	ft_swap(int **stacks, int stack, int *end, int mod);
int	ft_push(int **stacks, int stack, int *end, int mod);
int	ft_rotate(int **stacks, int stack, int *end, int mod);
int	ft_rev_rotate(int **stacks, int stack, int *end, int mod);
//PUSH_SWAP
int	ft_str_count(char *argv);
int	ft_check_duplicity(int *numbers);
int	ft_check_isalldigit(int argc, char **argv);
int	*ft_get_numbers(int argc, int size, char **argv);
//ALGORYTHM
int		ft_is_orded(int **stacks, int stack, int *end, int mod);
int		ft_radix(int **stacks, int stack, int *end, int magnitude);
void	ft_algorythm_test(int **stacks, int *end);
void	ft_algorythm(int **stacks, int *end);
void	ft_normalize(int *stack, int end);

#endif
