/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:57:23 by iyoshiha          #+#    #+#             */
/*   Updated: 2020/10/31 02:59:52 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	convert_num_to_str(unsigned int unsigned_n, char *strr)
{
	char	*temp;

	temp = strr;
	if (unsigned_n / 10 == 0)
	{
		*temp = '0' + unsigned_n;
		return ;
	}
	convert_num_to_str(unsigned_n / 10, --strr);
	*temp = '0' + unsigned_n % 10;
}

static void	assign_unsigend_n(int n, unsigned int *unsigned_n)
{
	if (n < 0)
		*unsigned_n = (unsigned int)n * -1;
	else
		*unsigned_n = (unsigned int)n;
}

char		*ft_itoa(int n)
{
	unsigned int	unsigned_n;
	char			*str;
	char			*strr;
	int				digit;

	assign_unsigend_n(n, &unsigned_n);
	digit = 1;
	while (unsigned_n >= 10)
	{
		unsigned_n /= 10;
		digit++;
	}
	if (n < 0)
		digit++;
	if (!(str = malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	strr = str + digit;
	*strr = '\0';
	strr--;
	assign_unsigend_n(n, &unsigned_n);
	convert_num_to_str(unsigned_n, strr);
	if (n < 0)
		str[0] = '-';
	return (str);
}
