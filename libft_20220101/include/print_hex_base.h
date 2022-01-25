/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_base.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha </var/mail/iyoshiha>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:25:37 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 14:26:22 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HEX_BASE_H
# define PRINT_HEX_BASE_H

# define PHEX_CAPITAL 1
# define PHEX_LOWERCASE 0
# define PHEX_LEN_OF_0X	2

int		print_address(void	*ptr);
int		print_hex_base(long long unsigned	decimal, char	flag);
int		replace_ten2a(int num);
int		replace_ten2a_capital(int num);
int		print0(void);
int		print_unsigned_int_hex(unsigned int decimal);
int		print_decimal_base(int n, int fd);
int		print_unsigned_decimal(unsigned int n, int fd);

#endif
