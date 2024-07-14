/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:01:47 by rhiguita          #+#    #+#             */
/*   Updated: 2024/07/14 13:20:47 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	main(void)
{
	char	c = 'A';
	char	*s = "Hola que tal";
	int	num = 3456;
	unsigned int	neg = -3;
	int hexa = 255;

	ft_printf("caracter: %c\n", c);
	printf("Original: %c\n\n", c);

	
	ft_printf("string: %s\n", s);
	printf("Original: %s\n\n", s);


	ft_printf("Mio Numero (i): %i\n", num);
	printf("Original: %i\n\n", num);

	ft_printf("Mio Numero (d): %d\n", num);
	printf("Original: %d\n\n", num);

	ft_printf("Mio Numero (neg): %u\n", neg);
	printf("Original: %u\n\n", neg);

	ft_printf("Mio hexadecimal: %x\n", hexa);
	printf("Original: %x\n\n", hexa);

	ft_printf("Mio hexadecimal: %X\n", hexa);
	printf("Original: %X\n\n", hexa);

	ft_printf("Mio porcentaje: %%\n");
	printf("Original: %%\n\n");

	return (0);
}*/

int	main(void)
{
	int a = 123;
	
	ft_printf("%p\n", &a);
}
