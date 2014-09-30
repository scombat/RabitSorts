/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/28 23:28:57 by scombat           #+#    #+#             */
/*   Updated: 2014/09/30 09:36:57 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rabitsorts.h"
#include <stdio.h>

bool	ORDER;

int		main() {

	ORDER = O_ASC;
	if (cmp_int(1, 2))
		printf("cmp 1 & 2 = true");
	else
		printf("cmp 1 & 2 = false");
	return (false);
}