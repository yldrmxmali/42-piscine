/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmyild <mehmyild@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:14:56 by mehmyild          #+#    #+#             */
/*   Updated: 2023/02/23 18:34:57 by mehmyild         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	y;

	if (ac > 1)
	{
		y = 1;
		i = 0;
		while (y < ac)
		{
			while (av[y][i] != '\0')
			{
				write(1, &av[y][i], 1);
				i++;
			}
			i = 0;
			y++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
