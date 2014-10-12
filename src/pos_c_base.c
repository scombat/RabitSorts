/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_c_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/12 01:12:03 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 01:22:33 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <unistd.h>

int		pos_c_base(char c) {
	t_sortopts		*opt;
	size_t			i;

	opt = get_opt();
	i = 0;
	while (opt->base[i]) {
		if (c == opt->base[i])
			return (i);
		i++;
	}
	return (false);
}