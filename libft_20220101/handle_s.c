/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:43 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 14:05:24 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print_hex_base.h>
#include <ft_printf.h>

int	handle_s(t_format_data	*data)
{
	char	*str;
	int		printed_num;

	str = va_arg(data->ap, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", STDOUT_FILENO);
		return (printed_num = LEN_OF_NULL);
	}
	ft_putstr_fd(str, STDOUT_FILENO);
	printed_num = ft_strlen(str);
	return (printed_num);
}
