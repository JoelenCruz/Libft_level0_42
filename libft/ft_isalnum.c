/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:47:26 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 14:51:08 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	char c = 'J';
	//int b = a;
	int result;
	result = ft_isalnum(c);
        
        printf("Result: %d\n", result);
        printf("Result: %d\n", isalpha(c));
        printf("Result: %d\n", isdigit(c));
        
}
*/
