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

#include "./includes/rabitsorts.h"
#include <stdio.h>


int		main() {

	opt(0, O_ASC, NULL, 0);
	printf("sort = %i\n", (int)(opt(0, 0, NULL, 1)));
	return (false);
}