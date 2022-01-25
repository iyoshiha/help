/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha </var/mail/iyoshiha>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:24:47 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 14:24:49 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <print_hex_base.h>

int	print_hex_base(long long unsigned	decimal, char	flag)
{
	long long unsigned	next_digit;
	int					remainder;
	int					printed_num;

	printed_num = 0;
	if (decimal == 0)
		return (print0());
	next_digit = decimal / 16;
	if (next_digit > 0)
		printed_num += print_hex_base(next_digit, flag);
	remainder = decimal % 16;
	if (remainder >= 10)
		if (flag == 1)
			remainder = replace_ten2a_capital(remainder);
	else
		remainder = replace_ten2a(remainder);
	else
		remainder += '0';
	ft_putchar_fd (remainder, STDOUT_FILENO);
	printed_num++;
	return (printed_num);
}

int	replace_ten2a(int	num)
{
	int	base;

	base = 'a' - 10;
	return (base + num);
}

int	replace_ten2a_capital(int	num)
{
	int	base;

	base = 'A' - 10;
	return (base + num);
}

int	print0(void)
{
	int	printed_num;

	ft_putchar_fd('0', STDOUT_FILENO);
	return (printed_num = 1);
}
/*
	return: int type ; the total number of printed charactors.
	printout pointer type value assigned as argument.
*/
