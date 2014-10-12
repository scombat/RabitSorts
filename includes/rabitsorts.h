/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabitsorts.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/28 21:19:27 by scombat           #+#    #+#             */
/*   Updated: 2014/10/12 03:33:59 by scombat          ###   ########.fr       */
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
t_sortopts		*get_opt(void);
t_sortopts		*create_opts(int sort, bool order, char *base);
void			set_sort_opt(int sort);
void			set_order_opt(bool order);
void			set_base_opt(char *base);
void			delopts(t_sortopts *opts);

bool			cmp_c(char c1, char c2);
bool			cmp_int(int i1, int i2);

bool			check_order_int(int *tab);
bool			check_order_char(char *tab);

int				pos_c_base(char c);

/*
**	sort functions
*/
bool			bubble_int_sort(int *tab);
bool			bubble_char_sort(char *tab);
bool			super_bubble_int_sort (int *tab, int n);
bool			super_bubble_char_sort (char *tab, int n);

bool			quadratic_int_sort(int *tab);
bool			quadratic_char_sort(char *tab);

#endif
