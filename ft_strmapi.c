/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:29:16 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/17 13:43:39 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	unsigned int	i;
	char			*resulted_string;

	if (!f || !s)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	resulted_string = (char *)malloc(size + 1);
	if (!resulted_string)
		return (NULL);
	while (s[i] != '\0')
	{
		resulted_string[i] = (*f)(i, s[i]);
		i++;
	}
	resulted_string[i] = '\0';
	return (resulted_string);
}
