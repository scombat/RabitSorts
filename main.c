/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/28 23:28:57 by scombat           #+#    #+#             */
/*   Updated: 2014/09/28 23:38:34 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rabitsorts.h"
#include <stdio.h>


int		main() {
	ORDER = O_ASC;

	if (ALPHABET_USER) {
		printf("alphabets :\nl\t%s\nu\t%s\n", USER_ALPH_L, USER_ALPH_U);
	} else {
		printf("code ascii\n");
	}

	if (ORDER)
		printf("order by asc\n");
	else
		printf("order by desc\n");

	printf("à vs é : %i", comp_char('à', 'é'));
	return (false);
}