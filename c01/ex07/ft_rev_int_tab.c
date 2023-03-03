/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);
    
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
