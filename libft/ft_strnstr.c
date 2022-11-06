/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:24:46 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:24:57 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	l2;

	l2 = ft_strlen(s2);
	if (!l2)
		return ((char *)s1);
	while (*s1 && len >= l2)
	{
		if (!ft_strncmp(s1, s2, l2))
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
