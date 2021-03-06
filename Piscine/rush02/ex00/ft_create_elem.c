/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:30:25 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/22 12:44:00 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_numbers
{
	char				*digit;
	char				*text;
	struct s_numbers	*next;
}	t_numbers;

t_numbers	*ft_create_elem(char *digit, char *text)
{
	t_numbers	*my_struct;

	my_struct = (t_numbers *)malloc(sizeof(t_numbers));
	if (my_struct == NULL)
		return (NULL);
	my_struct->digit = digit;
	my_struct->text = text;
	my_struct->next = NULL;
	return (my_struct);
}
