/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 09:34:53 by scombat           #+#    #+#             */
/*   Updated: 2014/09/30 09:35:39 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"

bool	cmp_int(int i1, int i2) {
	if (i1 == i2)
		return (true);
	return ((i1 < i2) ? ((ORDER) ? true: false): ((ORDER) ? false: true));
}