/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str = "je compte";

	ft_strlen(str);
	printf("taille : %d\n", ft_strlen(str));
	return (0);
}
*/
