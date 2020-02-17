/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:51:18 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/06 16:07:17 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = size - 1;
	while (j < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		j++;
		i--;
	}
}