/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:30:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:07:38 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** SINOPSE: teste de caracteres de impressão (incluindo caracteres de espaço)
**
** DESCRIÇÃO:
** A função isprint() testa qualquer caractere de impressão, incluindo espaço
** (` ').
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char c = '	';
	int b = '5';
	printf("%d",ft_isprint(b));
}
*/
