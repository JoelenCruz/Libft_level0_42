/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:30:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:30:06 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: localizar caractere na string (Ultima ocorrencia!)
**
** DESCRIÇÃO:
** A função strrchr() localiza a ÚLTIMA ocorrência de c (convertida em
** char) na string apontada por s. O caractere nulo final é
** considerado como parte da string; portanto, se c é `\0', a função
** ções localizam a terminação `\0'.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	i = 0;
	ini = s;
	while (s[i] != '\0')
		i++;
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	const char s[1000] = "JOelencruzdasilva123456";
	int c = 101;
	printf("%s",ft_strrchr(s,c));
}
*/