/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:53:53 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/06 21:54:05 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= '0' && *(str + i) <= '9'))
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
