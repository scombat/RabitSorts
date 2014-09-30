/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/30 09:01:20 by scombat           #+#    #+#             */
/*   Updated: 2014/09/30 09:34:17 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"

bool	cmp_c(char c1, char c2) {
	if (c1 == c2)
		return (true);
	return ((c1 < c2) ? ((ORDER) ? true: false): ((ORDER) ? false: true));
}