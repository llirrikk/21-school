/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:02:28 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/04 13:02:30 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(void)
{
	int	i;

	i = '0';
	while (i < '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
