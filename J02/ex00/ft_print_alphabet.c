/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgrialat <zgrialat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: AAAA/MM/JJ HH:MM:SS by zgrialat          #+#    #+#             */
/*   Updated: AAAA/MM/JJ HH:MM:SS by zgrialat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);

void ft_print_alphabet(void)
{
	int i;

	i = 97;	
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}
