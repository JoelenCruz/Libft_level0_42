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

static void	lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	size_t		len;
	int			weight;
	size_t		cur;
	char		*str;

	lengths(n, &len, &weight);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str[cur] = '-';
		cur++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str[cur++] = - (n / weight % 10) + 48;
		weight = weight / 10;
	}
	str[cur] = '\0';
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
