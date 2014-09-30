/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 12:16:28 by scombat           #+#    #+#             */
/*   Updated: 2014/09/30 14:54:02 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <stdlib.h>

t_sortopts		*create_opts(int sort, bool order, char *base) {
	t_sortopts	*opts;

	opts = NULL;
	opts = (t_sortopts *)malloc(sizeof(t_sortopts));
	if (!opts)
		return (NULL);
	opts->sort = sort;
	opts->order = order;
	opts->base = base;
	return (opts);
}

t_sortopts		*change_opts(void *new_val, int i_opts, t_sortopts *opts) {
	if (i_opts == 1)
		opts->sort = (int)(new_val);
	else if (i_opts == 2)
		opts->order = (bool)(new_val);
	else if (i_opts == 3)
		opts->base = (char *)(new_val);
	return (opts);
}

void			delopts(t_sortopts *opts) {
	if (opts) {
		opts->sort = 0;
		opts->order = 0;
		opts->base = NULL;
		free(opts);
	}
}

void			*opt(int sort, bool order, char *base, int getter) {
	static t_sortopts	*opts = null;

	if (getter == 0) {
		if (!opts)
			opts = create_opts(sort, order, base);
		if (opts->sort != sort)
			change_opts(sort, 1, opts);
		if (opts->order != order)
			change_opts(order, 2, opts);
		if (opts->base != base)
			change_opts(base, 3, opts);
		return (opts);
	}
	if (opts) {
		if (getter == 1)
			return (opts->sort);
		if (getter == 2)
			return (opts->order);
		if (getter == 3)
			return (opts->base);
	}
	return (opts);
}


