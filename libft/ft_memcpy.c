/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:11:58 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:18:57 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SINOPSE: área de memória de cópia
**
** DESCRIÇÃO:
** 	A função memcpy() copia n bytes da área de memória src para a memória
** área dest. As áreas de memória não devem se sobrepor. 
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h> //para o printf
#include <stddef.h> //para o size_t
#include <string.h> //para usar o memcpy
int main(void)
{
	char src[100] = "Fora Bolsonaro";
	char dest[100] = "Lula ladrao roubou meu coração";
	size_t n = 5;
	
	printf("o endereço de memoria de src é %p\n", (void *) &src);
	printf("o endereço de memoria de dest é %p\n", (void *) &dest);
	printf("%p\n", ft_memcpy(dest, src, n));
	printf("%p", memcpy(dest, src, n));
	
}
*/
