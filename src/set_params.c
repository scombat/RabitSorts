/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 23:40:10 by scombat           #+#    #+#             */
/*   Updated: 2014/10/01 00:33:04 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"

void	set_sort_opt(int sort) {
	t_sortopts		*opt;

	opt = get_opt();
	opt->sort = sort;
}

void	set_order_opt(bool order) {
	t_sortopts		*opt;

	opt = get_opt();
	opt->order = order;
}

void	set_base_opt(char *base) {
	t_sortopts		*opt;

	opt = get_opt();
	opt->base = base;
}