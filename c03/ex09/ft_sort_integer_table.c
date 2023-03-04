/*#include <stdio.h>*/

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	swap;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int tab[] = {3, 1, 4, 2, 5};
    int size = sizeof(tab) / sizeof(int);
    int i = 0;

	printf("non trie : ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_integer_table(tab, size);
	printf("trie : ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
