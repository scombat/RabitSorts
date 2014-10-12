/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 12:16:28 by scombat           #+#    #+#             */
/*   Updated: 2014/10/01 00:31:44 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <stdlib.h>

t_sortopts		*get_opt(void) {
	static t_sortopts	*opts = NULL;

	if (!opts)
		opts = create_opts(0, O_ASC, NULL);
	return (opts);
}

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

void			delopts(t_sortopts *opts) {
	if (opts) {
		opts->sort = 0;
		opts->order = 0;
		opts->base = NULL;
		free(opts);
	}
}


