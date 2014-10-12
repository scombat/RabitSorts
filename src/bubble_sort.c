/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/12 01:34:59 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 02:51:59 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <unistd.h>

bool	bubble_int_sort(int *tab) {
	size_t		i;
	int			tmp;
	bool		not_ordered;

	not_ordered = true;
	while (not_ordered) {
		not_ordered = false;
		i = 0;
		while (tab[i + 1]) {
			if (!cmp_int(tab[i], tab[i + 1])) {
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
				not_ordered = true;
			}
			i++;
		}
	}
	return (true);
}

bool	bubble_char_sort(char *tab) {
	size_t		i;
	char		tmp;
	bool		not_ordered;

	not_ordered = true;
	while (not_ordered) {
		not_ordered = false;
		i = 0;
		while (tab[i + 1]) {
			if (!cmp_c(tab[i], tab[i + 1])) {
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
				not_ordered = true;
			}
			i++;
		}
	}
	return (true);
}

bool	super_bubble_int_sort (int *tab, int n) {
	size_t		i;
	size_t		j;
	int			tmp;
	bool		not_ordered;

	not_ordered = true;
	i = 0;
	while (i < n && not_ordered) {
		not_ordered = false;
		j = 1;
		while (tab[j] && j < (n - i)) {
			if (!cmp_int(tab[j], tab[j + 1])) {
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
				not_ordered = true;
			}
			j++;
		}
		i++;
	}
	return (true);
}

bool	super_bubble_char_sort (char *tab, int n) {
	size_t		i;
	size_t		j;
	char		tmp;
	bool		not_ordered;

	not_ordered = true;
	i = 0;
	while (i < n && not_ordered) {
		not_ordered = false;
		j = 0;
		while (tab[j + 1] && (j < (n - i))) {
			if (!cmp_c(tab[j], tab[j + 1])) {
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
				not_ordered = true;
			}
			j++;
		}
		i++;
	}
	return (true);
}