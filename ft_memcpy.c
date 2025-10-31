/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:42:12 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/31 17:56:45 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;
	size_t			i;

	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	i = 0;
	if (dst == sc)
		return (dest);
	if (!dst && !sc)
		return (NULL);
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
