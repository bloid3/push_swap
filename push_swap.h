/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:01:46 by marvin            #+#    #+#             */
/*   Updated: 2023/12/21 15:04:03 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include "libft/libft.h"
# include <limits.h>

void	ft_print(char *s, int opt, char ab);
void	onlynum(char **n);
void	isempty(char *s);
t_list	*makelist(int argc, char *argv[]);
int		checknums(char *s);
t_list	*makeauxlist(int argc, char *argv[], t_list *stacka);
void	checkall(t_list *aux);
int		ft_isnumber(char *str);
void	repeated(t_list *aux);
int		isinorder(t_list *aux);
t_list	*maxaddr(t_list *stack);
t_list	*minaddr(t_list *stack);
t_list	*findnextmin(t_list *stack, t_list *last_min);
t_list	*ft_index(t_list **stacka, t_list **stackb);
void	ft_free(char **numbers);
int		findmin(t_list *stack);
int		findmax(t_list *stacka);
void	swap(t_list **stack, char option);
void	push(t_list **src, t_list **dest, char option);
void	rotate(t_list **stack, char option);
void	reverserotate(t_list **stack, char option);
void	sortsmol(t_list **stackA, t_list **stackB);
void	sortsmol3(t_list **stackA);
void	sortsmol4(t_list **stackA, t_list **stackB);
void	sortsmol5(t_list **stackA, t_list **stackB);
int		bit_size(int lstsize);
void	radix(t_list **stacka, t_list **stackb);

#endif