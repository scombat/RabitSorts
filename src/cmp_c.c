/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 09:01:20 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 01:22:01 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"

bool	cmp_c(char c1, char c2) {
	t_sortopts		*opt;
	bool			order;

	opt = get_opt();
	order = opt->order;
	if (c1 == c2)
		return (true);
	if (opt->base)
		return ((pos_c_base(c1) < pos_c_base(c2)) ? ((order) ? true: false):\
		 ((order) ? false: true));
	return ((c1 < c2) ? ((order) ? true: false): ((order) ? false: true));
}