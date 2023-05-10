/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:03:06 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/05/10 00:02:48 by mamagalh@st      ###   ########.fr       */
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
int	ft_swap(int **stacks, int stack, int *end, int mod);
int	ft_push(int **stacks, int stack, int *end, int mod);
int	ft_rotate(int **stacks, int stack, int *end, int mod);
int	ft_rev_rotate(int **stacks, int stack, int *end, int mod);
//PARSING
int	ft_str_count(char *argv);
int	ft_check_duplicity(int *numbers);
int	ft_check_isalldigit(int argc, char **argv);
int	*ft_get_numbers(int argc, int size, char **argv);
void	ft_normalize(int **stacks, int *end);
//ALGORYTHM RADIX
void	ft_algorythm_test(int **stacks, int *end);
int		ft_radix(int **stacks, int stack, int *end, int magnitude);
void	ft_algorythm_radix(int **stacks, int *end);
//ALGORYTHM2
int ft_is_orded(int **stacks, int stack, int *end);
int ft_is_next(int a, int b, int stack);
int	ft_do_swap(int **stacks, int *end);
void	ft_algorythm2(int **stacks, int *end);
//ALGORYTHM QUICK
int ft_partition(int **stacks, int low, int high, int *end);
void ft_quick_sort(int **stacks, int low, int high, int *end);
void ft_algorythm_quick(int **stacks, int *end);
//ALGORYTHM LOWER
int ft_hightest(int **stacks, int stack, int *end);
int ft_lowest(int **stacks, int stack, int *end);
void	ft_algorythm_3n(int **stacks, int stack, int *end);
void	ft_algorythm_5n(int **stacks, int stack, int *end);
void	ft_algorythm_n100(int **stacks, int *end);
int ft_is_in(int *arr, int n);
int *ft_range5(int start);
//UTILS
unsigned int	ft_itou(int nb);
int	*ft_arrcpy(int *src, int size);
int **ft_arr2cpy(int **src, int y, int x);

#endif
