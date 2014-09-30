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

typedef			unsigned int		boolean;
# define		bool				boolean
# define		BOOL				bool
# define		BOOLEAN				bool
# define		TRUE				1
# define		true				TRUE
# define		FALSE				0
# define		false				FALSE

# define		null				(void *)(0)
# define		NULL				null

# define		O_ASC				true
# define		O_DESC				false

typedef struct	s_sortopts {
	int			sort;
	bool		order;
	char		*base;
}				t_sortopts;

/*
**	functions
*/
void			*opt(int sort, bool order, char *base, int getter);
t_sortopts		*create_opts(int sort, bool order, char *base);
t_sortopts		*change_opts(void *new_val, int i_opts, t_sortopts *opts);
void			delopts(t_sortopts *opts);

bool			cmp_c(char c1, char c2);
bool			cmp_int(int i1, int i2);

#endif
