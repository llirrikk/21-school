/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:02:37 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/06 21:02:55 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;
	int	t;

	res = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		t = *(str + i);
		if (!((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z')))
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
