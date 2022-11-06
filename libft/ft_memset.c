/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:19:28 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: memset - preenche a memória com um byte constante
**
** DESCRIÇÃO:
**       A função memset() preenche os primeiros n bytes da área de memória
**       apontado por s com o byte constante c.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char unsigned *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000] = "JOelencruzdasilva123456";
	void *b = s; 
	int c = 1; 
	size_t n = 1;
	printf("resultado com memset() %p\n",memset(b,c,n));
	printf("resultado com ft_memset() %p",ft_memset(b,c,n));
}
*/
