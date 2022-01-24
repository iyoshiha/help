/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 12:45:42 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <libft.h>

void	output_and_count(t_format_data	*data)
{
	data->format_i = 0;
	while (data->format[data->format_i] != '\0')
	{
		if (data->format[data->format_i] == '%')
		{
			data->format_i++;
			data->printed_len += convert_and_count(data);
		}
		else
		{
			ft_putchar_fd(data->format[data->format_i], STDOUT_FILENO);
			data->printed_len++;
		}
		data->format_i++;
	}
}
