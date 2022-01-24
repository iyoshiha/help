/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:50:26 by iyoshiha          #+#    #+#             */
/*   Updated: 2022/01/15 08:31:20 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "handle.h"
#include "print_hex_base.h"

int	convert_and_count(t_format_data *data)
{
	int	ret;

	ret = 0;
	if ((data->format[data->format_i]) == ('c'))
		ret = handle_c(data);
	else if ((data->format[data->format_i]) == ('s'))
		ret = handle_s(data);
	else if ((data->format[data->format_i]) == ('p'))
		ret = handle_p(data);
	else if ((data->format[data->format_i]) == ('d'))
		ret = handle_d(data);
	else if ((data->format[data->format_i]) == ('i'))
		ret = handle_i(data);
	else if ((data->format[data->format_i]) == ('u'))
		ret = handle_u(data);
	else if ((data->format[data->format_i]) == ('x'))
		ret = handle_lower_x(data);
	else if ((data->format[data->format_i]) == ('X'))
		ret = handle_large_x(data);
	else if ((data->format[data->format_i]) == ('%'))
		ret = handle_pct(data);
	return (ret);
}
