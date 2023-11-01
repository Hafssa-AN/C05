/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:40:18 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/02 00:45:58 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	rsl;
	long	j;

	rsl = nb;
	if (rsl <= 0)
		return (0);
	if (rsl == 1)
		return (1);
	j = 2;
	if (rsl >= 2)
	{
		while (j * j <= rsl)
		{
			if (j * j == rsl)
				return (j);
			j++;
		}
	}
	return (0);
}
