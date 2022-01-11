/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:00:26 by jiwonpar          #+#    #+#             */
/*   Updated: 2022/01/08 16:02:56 by jiwonpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numb;

	numb = '0';
	while (numb <= '9')
	{
		write (1, &numb, 1);
		numb++;
	}
}
