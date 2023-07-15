/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:46:08 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/07/13 18:59:19 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
			t++;
	return (t);
}
/*int main()
{
	ft_strlen("Hola");
	return(0);

}*/
