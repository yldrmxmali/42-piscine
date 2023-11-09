#include <unistd.h>
void ft_odd(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if ((i % 3) == 1)
		{
			write(1,&str[i],1);
		}
		i++;
	}
	write(1,"\n",1);
}
int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_odd(argv[1]);
}

