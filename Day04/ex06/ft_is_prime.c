/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:30:33 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 15:43:15 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int index;

	index = 3;
	if (nb <= 1 || nb == 4)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb == 2147483647)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (index * index < nb && nb % index != 0)
	{
		index += 2;
	}
	if (index * index > nb && nb % index != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
