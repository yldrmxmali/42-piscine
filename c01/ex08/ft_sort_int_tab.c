/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmyild <mehmyild@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:11:57 by mehmyild          #+#    #+#             */
/*   Updated: 2023/02/10 14:54:58 by mehmyild         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	size = size - 1;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			rev = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = rev;
			i = 0;
		}
		else
			i++;
	}
}
