/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgrialat <zgrialat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: AAAA/MM/JJ HH:MM:SS by zgrialat          #+#    #+#             */
/*   Updated: AAAA/MM/JJ HH:MM:SS by zgrialat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);

void ft_print_numbers(void)
{
	int i;

	i = 48;	
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}
