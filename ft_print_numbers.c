/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:44:36 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/07/06 19:20:11 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{	
	int	num;

	num = 48;
	while (num < 58)
	{	
		write (1, &num, 1);
		num++;
	}
}
/* int main()
{
	
ft_print_numbers();
return 0;
} */
