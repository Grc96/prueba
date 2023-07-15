/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:03:15 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/07/13 18:58:00 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>*/
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < (size / 2))
	{
			count = tab[i];
			tab[i] = tab [size -1 - i];
			tab [size - 1 - i] = count;
			i++;
	}
}
/*
int main ()
{
	int	numeros[7] ={70, 68, 48, 45, 98, 83, 67};
	ft_rev_int_tab(numeros, 7);
	printf("%d,", numeros[0]);
	printf("%d,", numeros[1]);
	printf("%d,", numeros[2]);
	printf("%d,", numeros[3]);
	printf("%d,", numeros[4]);
	printf("%d,", numeros[5]);
	printf("%d,", numeros[6]);
	return(0);
}
*/
