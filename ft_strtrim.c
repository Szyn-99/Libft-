/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:15:01 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/10/22 11:10:25 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_help(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_portion;
	size_t	last_portion;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	first_portion = 0;
	last_portion = ft_strlen(s1);
	i = 0;
	while (s1[first_portion] && ft_help(s1[first_portion], set))
		first_portion++;
	while (first_portion < last_portion && ft_help(s1[last_portion - 1], set))
		last_portion--;
	result = (char *)malloc((last_portion - first_portion) + 1);
	if (!result)
		return (NULL);
	while (i < (last_portion - first_portion))
	{
		result[i] = s1[i + first_portion];
		i++;
	}
	result[i] = '\0';
	return (result);
}
