/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabitsorts.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/28 21:19:27 by scombat           #+#    #+#             */
/*   Updated: 2014/09/28 23:44:50 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RABITSORTS_H
# define RABITSORTS_H
# include <stddef.h>
# include <string.h>

/*
**	defines
*/

typedef			unsigned int	boolean;
# define		bool			boolean
# define		BOOL			bool
# define		BOOLEAN			bool
# define		TRUE			1
# define		true			TRUE
# define		FALSE			0
# define		false			FALSE

# define		O_ASC			true
# define		O_DESC			false

/*
**	globals
*/

bool			ORDER =			O_ASC;
bool 			ALPHABET_USER =	TRUE;
char			*USER_ALPH = 	null;

/*
**	functions
*/


#endif