/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:08:41 by jiwonpar          #+#    #+#             */
/*   Updated: 2022/01/11 12:58:38 by jiwonpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr(int *A)
{	
	int	A[10];
	int	z;

	z = 0;
	while (z < 10)
	{
		A[z] = z;
		z++;
	}
}

int	check(int *A, int n)
{
	int	i;

	i = 0;
	while (i < (n - 1))
	{
		if (A[i] >= A[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}

void	print(int *A, int n)
{
	int		a;
	char	b;

	a = 0;
	while (a < n)
	{
		b = A[a] + '0';
		write(1, &b, 1);
		a++;
	}
}

void	plus(int *A, int n)
{
	int	k;
	int	j;

	k = 0;
	j = 1;
	while (k < n)
	{
		if (A[n - j] == 10)
		{
			A[n - j] = 0;
			j++;
			A[n - j]++;
		}
		k++;
	}
}

void	ft_print_combn(int n)
{
	arr(A);
	if (n == 1)
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	else
	{
		while (A[0] != (11 - n))
		{
			if (check(A, n))
			{
				print(A, n);
				if (A[0] != (10 - n))
					write(1, ", ", 2);
			}
			A[n - 1]++;
			plus(A, n);
			check(A, n);
		}
	}
}
