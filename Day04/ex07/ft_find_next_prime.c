/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 22:58:59 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 23:08:40 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int index;

	if (nb <= 2)
		return (2);
	if (nb == 2147483647)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	index = 3;
	while (nb % index != 0 && nb > index * index)
		index += 2;
	if (nb < index * index)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
