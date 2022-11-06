/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:11:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 15:24:15 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIÇÃO:
** 	As funções strcat() e strncat() anexam uma cópia do null-
** string terminada s2 até o final da string terminada em nulo s1, então
** adicione um final `\0'. A string s1 deve ter espaço suficiente para conter
**	o resultado.
** A função strncat() anexa não mais que n caracteres de s2, e
** então adiciona um final `\0'.
*/

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char *src;
	unsigned int n;
	
	n = 10;
	src = "_silva";
	char dest[50] = "jo";

	printf("%s", ft_strncat(dest, src, n));

}
*/
