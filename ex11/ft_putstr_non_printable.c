/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:24:17 by jv                #+#    #+#             */
/*   Updated: 2022/02/11 20:27:39 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexconvert(unsigned int num, char *hexatable)
{
	char	txt_hexa[2];
	int		i;

	i = 2;
	while (i--)
	{
		txt_hexa[i] = hexatable[num % 16];
		num /= 16;
	}
	write(1, "\\", 1);
	write(1, &txt_hexa[0], 2);
}

int	is_valid(unsigned char ch)
{
	if ((ch < 32) || (ch >= 126))
		return (0);
	return (1);
}

void	fill(char *str)
{
	char	ch;
	int		count;

	ch = '0';
	count = 0;
	while (ch <= '9')
		str[count++] = ch++;
	ch = 'a';
	while (ch <= 'f')
		str[count++] = ch++;
}

void	ft_putstr_non_printable(char *str)
{
	char	hexatable[16];

	fill(hexatable);
	while (*str)
	{
		if (is_valid(*(unsigned char *)str) == 0)
		{
			hexconvert(*(unsigned *)str, hexatable);
			str++;
			continue ;
		}
		write(1, str, 1);
		str++;
	}
}
