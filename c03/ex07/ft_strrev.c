/*#include <stdio.h>*/

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	j = len - 1;
	if (len <= 1)
	{
		return (str);
	}
	while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "a";
	char	str2[] = "ab";
	char	str3[] = "abcde";
    
	printf("%s => ", str1);
	printf("%s\n", ft_strrev(str1));
	printf("%s => ", str2);
	printf("%s\n", ft_strrev(str2));
	printf("%s => ", str3);
	printf("%s\n", ft_strrev(str3));
	return (0);
}
*/
