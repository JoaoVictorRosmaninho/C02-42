/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:45:49 by jv                #+#    #+#             */
/*   Updated: 2022/02/11 19:48:53 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 'A' && *tmp <= 'Z')
			*tmp += 32;
		tmp++;
	}
	return (str);
}
