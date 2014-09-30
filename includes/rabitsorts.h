/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabitsorts.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/28 21:19:27 by scombat           #+#    #+#             */
/*   Updated: 2014/09/30 09:38:25 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RABITSORTS_H
# define RABITSORTS_H

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

extern bool 	ORDER;
extern char 	*ALPHABET_USER;

/*
**	functions
*/

bool			cmp_c(char c1, char c2);
bool			cmp_int(int i1, int i2);

#endif