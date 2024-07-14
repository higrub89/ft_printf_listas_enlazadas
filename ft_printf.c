/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:59:22 by rhiguita          #+#    #+#             */
/*   Updated: 2024/07/14 13:19:53 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_format(const char *str, t_list **head)
{
	while (*str)
	{
			char *text = malloc(2);
			text[0] = *str;
			text[1]	= '\0';
			ft_lstadd_back(head, ft_lstnew(text));
			str++;
	}
}

void	process_node(t_list *head, va_list args, int *i)
{
	while (head)
	{
		if ((*(head->content)) == '%')
		{
			if ((*(head->next->content)) == 's')
			{
				head = head->next;
				ft_putstr(va_arg(args, char *), i);
			}
			else if ((*(head->next->content)) == 'c')
			{
				head = head->next;
				ft_putchar_count(va_arg(args, int), i);
			}
			else if ((*(head->next->content)) == 'd')
			{
				head = head->next;
				ft_putnbr(va_arg(args, int), i);
			}
			else if ((*(head->next->content)) == 'i')
			{
				head = head->next;
				ft_putnbr(va_arg(args, int), i);
			}
			else if ((*(head->next->content)) == 'u')
			{
				head = head->next;
				ft_unsig_putnbr(va_arg(args, unsigned int), i);
			}		
			else if ((*(head->next->content)) == 'p')
			{
				head = head->next;
				ft_pointer(va_arg(args, void *), i);
			}
			else if ((*(head->next->content)) == 'x')
			{
				head = head->next;
				ft_hexa_low(va_arg(args, unsigned long), i);
			}	
			else if ((*(head->next->content)) == 'X')
			{
				head = head->next;
				ft_hexa_upper(va_arg(args, unsigned long), i);
			}	
			else if ((*(head->next->content)) == '%')
			{
				head = head->next;
				ft_putchar_count('%', i);
			}
		}
		else
			ft_putstr((char *)head->content, i);
		head = head->next;
	}
}

int	ft_printf(char const *str, ...)
{
	t_list *head = NULL;
	parse_format(str, &head);
	va_list	args;
	int	len;

	len = 0;
	va_start(args, str);
	process_node(head, args, &len);
	va_end(args);
	ft_lstclear(&head, free);
	return (len);
}
