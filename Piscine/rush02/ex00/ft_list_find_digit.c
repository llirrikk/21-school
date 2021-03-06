/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:07:03 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/22 20:51:44 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_numbers
{
	char				*digit;
	char				*text;
	struct s_numbers	*next;
}	t_numbers;

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);

t_numbers	*ft_list_find_digit(t_numbers *begin_list, char *data_ref)
{
	t_numbers	*list_ptr;

	while (begin_list)
	{
		list_ptr = begin_list;
		if (ft_strcmp(list_ptr->digit, data_ref) == 0)
			return (list_ptr);
		begin_list = begin_list->next;
	}
	return ((void *)0);
}

char	*ft_list_find_10(t_numbers *begin_list, int digits_count)
{
	t_numbers	*list_ptr;

	while (begin_list)
	{
		list_ptr = begin_list;
		if (ft_strlen(list_ptr->digit) == digits_count)
			return (list_ptr->text);
		begin_list = begin_list->next;
	}
	return ((void *)0);
}
