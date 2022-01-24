/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha </var/mail/iyoshiha>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:22:28 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 14:44:39 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <print_hex_base.h>

static	int	print_num(unsigned int unb, int fd)
{
	int	printed_num;

	printed_num = 0;
	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		printed_num += 1;
		return (printed_num);
	}
	printed_num = print_num(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);
	printed_num += 1;
	return (printed_num);
}

int	print_decimal_base(int n, int fd)
{
	unsigned int	unb;
	char			sign_len;

	sign_len = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign_len += 1;
		unb = -1 * n;
	}
	else
	{
		unb = n;
	}
	return (print_num(unb, fd) + sign_len);
}

int	print_unsigned_decimal(unsigned int n, int fd)
{
	return (print_num(n, fd));
}
