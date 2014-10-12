RabitSorts
==========

Usefull library for sort everything (Everything for my 42 born2code school projects ;) )

<h1>Usage:</h1>
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
<h1>Sorts Functions:</h1>
	- bubble_int_sort(int *tab); 			// simple bubble on int array
	- bubble_char_sort(char *tab); 			// simple bubble on char array
	- super_bubble_int_sort(int *tab);		// optimized bubble sort for int
	- super_bubble_char_sort(char *tab);	// optimized bubble sort for chars

	- quadratic_int_sort(int *tab);			// Selection sort on int array
	- quadratic_char_sort(char *tab);		// Selection sort on char array

	- insert_int_sort(int *tab);			// insert sort on int array
	- insert_char_sort(char *tab);			// insert sort on char array

<h2>Options functions:</h2>
	- get_opt(void);						// Get current opts or set standards opts
	- create_opts(...);						// Create a custom options structures
	- delopts(t_sortopts *opts);			// free opts and free struct

	- set_sort_opt(int sort);				// Set specific sort
	- set_order_opt(bool order);			// Set ASC or DESC order
	- set_base_opt(char *base);				// Set your proper alphabet

<h2>Other low level functions:</h2>
	- pos_c_base(char c);					// Return the position of char in user base
	- cmp_c(char c1, char c2);				// True if ordered else false
	- cmp_int(int i1, int i2);				// True if ordered else false
	- check_order_int(int *tab);			// evaluate if int array is ordered
	- check_order_char(char *tab);			// evaluate if char array is ordered