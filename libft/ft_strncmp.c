/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:11:58 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:24:39 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: comparar strings (limitado por tamanho)
**
** DESCRIÇÃO:
** As funções strcmp() e strncmp() comparam lexicograficamente os valores nulos.
** strings terminadas s1 e s2.
** A função strncmp() compara não mais que n caracteres. Porque
** strncmp() é projetado para comparar strings em vez de dados binários,
** caracteres que aparecem após um caractere `\0' não são comparados.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "e";
	unsigned int	n = 1;

	printf("Res: %d", ft_strncmp(str1, str2, n));

}
*/