/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/01 00:17:15 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 02:33:45 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <unistd.h>

bool		check_order_int(int *tab) {
	t_sortopts	*opt;
	size_t		i;

	opt = get_opt();
	i = 0;
	while (tab[i] && tab[i + 1]) {
		if (!cmp_int(tab[i], tab[i + 1]))
			return (false);
		i++;
	}
	return (true);
}

bool		check_order_char(char *tab) {
	t_sortopts	*opt;
	size_t		i;

	opt = get_opt();
	i = 0;
	while (tab[i] && tab[i + 1]) {
		if (!cmp_c(tab[i], tab[i + 1]))
			return (false);
		i++;
	}
	return (true);
}
