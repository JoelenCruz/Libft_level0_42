/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/05 11:32:57 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIÇÃO: testa caracteres na tabela  ASCII 
**
** DESCRIÇÃO:
** 		A função isascii() testa se caracteres estão presentes na tabela ASCII,
**	caracteres entre 0 e 127 incluido.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char c = '	';
	int b = '5';
	printf("%d",ft_isascii(c));
}
*/
