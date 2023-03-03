/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 51;
	b = 10;
	printf("avant : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Après :  %d, b : %d\n", a, b);
	return (0);
}
*/
