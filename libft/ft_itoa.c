/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:18:31 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/02 16:14:18 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_digits(int n)
{
	size_t	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;
	int		s;

	counter = num_digits(n);
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);
	s = 1;
	str[counter] = '\0';
	counter--;
	if (n < 0)
	{
		str[0] = '-';
		s = -1;
	}
	else if (n == 0)
		str[counter] = '0';
	while (n != 0)
	{
		str[counter] = ((n % 10) * s) + 48;
		n = n / 10;
		counter--;
	}
	return (str);
}

/*
#include <limits.h>
#include <stdio.h>

char * ft_itoa(int n);

void check(int n) {
        printf("%i = %s\n", n, ft_itoa(n));
}

int main() {
        check(0);
        check(-1);
        check(1);
        check(23);
        check(42);
        check(4711);
        check(1000);
        check(INT_MAX);
        check(1+INT_MIN);
        check(INT_MIN);
}
*/
