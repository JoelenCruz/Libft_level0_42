/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:30:22 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:27:32 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	length;

	if (s == 0)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	substring = malloc((sizeof(char) * len) + 1);
	if (!(substring))
		return (NULL);
	while (i < len && i + start < length)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*
#include <stdio.h>
// Implementa a função `substr()` em C
int main()
{
    char src[] = "Joelen Cruz da Silva";

    int m = 7;
    int n = 15;

    char* dest = ft_substr(src, m, n);

    printf("%s\n", dest);
}
*/
