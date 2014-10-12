/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadratic_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/12 03:23:01 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 03:33:22 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <unistd.h>

bool	quadratic_int_sort(int *tab) {
	size_t	i;
	size_t	j;
	int		tmp;
	int		min;

	i = 0;
	while (tab[i]) {
		min = i;
		j = i + 1;
		while (tab[j]) {
			if (cmp_int(tab[j], tab[min]))
				min = j;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[min];
		tab[min] = tmp;
		i++;
	}
	return (true);
}

bool	quadratic_char_sort(char *tab) {
	size_t	i;
	size_t	j;
	char	tmp;
	int		min;

	i = 0;
	while (tab[i]) {
		min = i;
		j = i + 1;
		while (tab[j]) {
			if (cmp_c(tab[j], tab[min]))
				min = j;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[min];
		tab[min] = tmp;
		i++;
	}
	return (true);
}