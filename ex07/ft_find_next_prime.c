/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:13:04 by hanebaro          #+#    #+#             */
/*   Updated: 2023/11/01 20:09:06 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	j;

	j = 2;
	if (nb <= 1)
		return (0);
	while (j < nb / j)
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb > 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (2);
}
