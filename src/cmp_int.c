/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 09:34:53 by scombat           #+#    #+#             */
/*   Updated: 2014/10/01 08:47:20 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"

bool	cmp_int(int i1, int i2) {
	t_sortopts		*opt;
	bool			order;

	opt = get_opt();
	order = opt->order;
	if (i1 == i2)
		return (true);
	if (order == O_ASC) {
		if (i1 > i2)
			return (false);
		else
			return (true);
	} else if (order == O_DESC) {
		if (i1 < i2)
			return (false);
		else
			return (true);
	}
	return (false);
}