/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:18:36 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 20:28:17 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
