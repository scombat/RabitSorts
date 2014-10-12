/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/12 03:48:53 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 03:57:18 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <unistd.h>

bool	insert_int_sort(int *tab) {
	size_t	i;
	size_t	j;
	int		last_el;

	i = 1;
	while (tab[i]) {
		j = i;
		last_el = tab[i];
		while (j > 0 && !cmp_int(tab[j - 1], last_el)) {
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = last_el;
		i++;
	}
	return (true);
}

bool	insert_char_sort(char *tab) {
	size_t	i;
	size_t	j;
	char	last_el;

	i = 1;
	while (tab[i]) {
		j = i;
		last_el = tab[i];
		while (j > 0 && !cmp_c(tab[j - 1], last_el)) {
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = last_el;
		i++;
	}
	return (true);
}