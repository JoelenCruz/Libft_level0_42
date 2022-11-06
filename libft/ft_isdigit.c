/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:07:25 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** SINOPSE: teste de caracteres de dígitos decimais
**
** DESCRIÇÃO:
** A função isdigit() testa um caractere de dígito decimal.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char c = 'j';
	int b = 5;
	printf("%d",ft_isdigit('5'));
}
*/
