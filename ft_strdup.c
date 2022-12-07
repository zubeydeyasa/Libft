/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyasa <zyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:17:55 by zyasa             #+#    #+#             */
/*   Updated: 2022/12/06 17:05:07 by zyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		n;
	int		l;

	l = ft_strlen(s1);
	n = 0;
	new = malloc(sizeof(char) * l + 1);
	if (new == NULL)
		return (NULL);
	while (s1[n])
	{
		new[n] = s1[n];
		n++;
	}
	new[n] = '\0';
	return (new);
}
