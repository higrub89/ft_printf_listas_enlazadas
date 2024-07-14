/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 01:22:30 by rhiguita          #+#    #+#             */
/*   Updated: 2024/07/14 10:57:31 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", i);
	else if (n < 0)
	{
		ft_putchar_count('-', i);
		ft_putnbr(-n, i);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, i);
		ft_putchar_count((n % 10) + 48, i);
	}
	if (n < 10)
		ft_putchar_count(n  + 48, i);
}
