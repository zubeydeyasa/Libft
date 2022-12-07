/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyasa <zyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:02:30 by zyasa             #+#    #+#             */
/*   Updated: 2022/12/06 17:06:23 by zyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_number_length(long n)
{
	long	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	nn;
	long	length;
	char	*value;

	nn = n;
	length = ft_number_length(nn);
	value = malloc(sizeof(char) * (length + 1));
	if (value == NULL)
		return (NULL);
	value[length] = '\0';
	length--;
	if (nn < 0)
		nn = -nn;
	while (length >= 0)
	{
		value[length] = (nn % 10) + '0';
		length--;
		nn /= 10;
	}
	if (ft_sign(n) == 1)
		value[0] = '-';
	return (value);
}
