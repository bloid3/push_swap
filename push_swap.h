/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:01:46 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 13:45:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include "libft/libft.h"


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
void	sortsmol(t_list **stackA, t_list **stackB);

#endif