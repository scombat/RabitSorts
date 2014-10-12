RabitSorts
==========

Usefull library for sort everything (Everything for my 42 born2code scholl projects ;) )

*Usages:
```
int		main() {
	t_sortopts		*opt;
	int				my_array[2] = {1, 2};

	/* initialize options */
	opt = get_opt();

	/* useless for the moment, omit it for now ;) */
	set_sort_opt(1);

	/* use O_ASC or O_DESC for ascendent or descendant sort */
	set_order_opt(O_ASC);

	/* sort with optimized bubble sort alg */
	super_bubble_int_sort(my_array);

	return (0);
}
```