/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:45:23 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/17 13:40:56 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_length(long number)
{
	int	length;

	length = 0;
	if (number <= 0)
		length++;
	while (number != 0)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

static char	*ft_half_itoa(char *converted, long number, int length)
{
	converted[length] = '\0';
	length--;
	while (number != 0)
	{
		converted[length] = (number % 10) + '0';
		number /= 10;
		length--;
	}
	return (converted);
}

char	*ft_itoa(int n)
{
	long	number;
	int		length;
	char	*converted;

	number = n;
	length = ft_n_length(number);
	converted = (char *)malloc(length + 1);
	if (!converted)
		return (NULL);
	if (number < 0)
	{
		converted[0] = '-';
		number = -number;
	}
	if (number == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
		return (converted);
	}
	return (ft_half_itoa(converted, number, length));
}
