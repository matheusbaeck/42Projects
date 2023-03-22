/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:03:06 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/22 02:18:01 by mamagalh@st      ###   ########.fr       */
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

//MOVES
int	other(int nb);
int	ft_swap(int **stacks, int stack, int *end, int mod);
int	ft_push(int **stacks, int stack, int *end, int mod);
int	ft_rotate(int **stacks, int stack, int *end, int mod);
int	ft_rev_rotate(int **stacks, int stack, int *end, int mod);
//PUSH_SWAP
int	ft_str_count(char *argv);
int	ft_check_duplicity(int *numbers);
int	ft_check_isalldigit(char *argv);
int	*ft_get_numbers(char *argv);

#endif
