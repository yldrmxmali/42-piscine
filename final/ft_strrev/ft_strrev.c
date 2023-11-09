int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char tmp;
	int i;
	int len;

	len = ft_strlen(str) - 1;
	i = 0;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
#include <stdio.h>
int	main()
{
	char str[] = "mali";
	printf("%s",ft_strrev(str));
}
