/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:48:13 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/02 11:13:56 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sc;
	unsigned char	*dn;
	size_t			for_safety;

	sc = (unsigned char *)src;
	dn = (unsigned char *)dest;
	if (!sc && !dn)
		return (NULL);
	if (dn == sc)
		return (dest);
	if (!*sc && !*dn)
		return (dest);
	if (sc > dn)
	{
		ft_memcpy(dn, sc, n);
	}
	else
	{
		for_safety = n;
		while (for_safety--)
		{
			dn[for_safety] = sc[for_safety];
		}
	}
	return (dest);
}
