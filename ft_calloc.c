/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:04:44 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/19 22:41:29 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*memory;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 18446744073709551615UL / size)
		return (NULL);
	total = size * nmemb;
	memory = (unsigned char *)malloc(total);
	if (!memory)
		return (NULL);
	while (i < total)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
