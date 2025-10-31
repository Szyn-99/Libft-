/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:25:23 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/31 18:14:17 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	k;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dst_len = ft_strlen((const char *)dst);
	i = dst_len;
	k = 0;
	if (dst_len >= size)
	{
		return (size + src_len);
	}
	while (i < size - 1 && src[k] != '\0')
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
