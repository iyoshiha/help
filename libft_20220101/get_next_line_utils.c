/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:46:16 by iyoshiha          #+#    #+#             */
/*   Updated: 2022/01/15 07:33:05 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*save_free(char **save, t_txt *txt, t_place_save place)
{
	if (place == in_create_newline)
	{
		free(save[txt->fd]);
		save[txt->fd] = DONE;
		return (MEMORY_SUCCESS);
	}
	else if (place == in_gnl)
	{
		free(save[txt->fd]);
		save[txt->fd] = DONE;
	}
	return (save[txt->fd]);
}

void	*read_txt(char **save, t_txt *txt)
{
	txt->len_read = read(txt->fd, txt->buf, txt->bufsize);
	if (txt->len_read < 0 \
	|| (txt->len_read == END_OF_FILE && save[txt->fd] == DONE))
	{
		manage_buf(free_buf, save, txt);
		return (ERROR_OR_DONE);
	}
	return (txt->buf);
}
