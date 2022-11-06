/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:30:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:46:30 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: localizar caractere na string (primeira ocorrência)
**
** DESCRIÇÃO:
** A função strchr() localiza a PRIMEIRA ocorrência de c (convertida em
** char) na string apontada por s. O caractere nulo final é
** considerado como parte da string; portanto, se c é `\0', a função
** ções localizam a terminação `\0'.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
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
	printf("%s",ft_strchr(s,c));
}
*/
