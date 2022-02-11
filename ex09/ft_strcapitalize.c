/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:52:49 by jv                #+#    #+#             */
/*   Updated: 2022/02/11 19:58:40 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch)
{
	if (!((ch >= 'a' && ch <= 'z') || ((ch >= '0' && ch <= '9'))))
		return (0);
	return (1);
}

void	capitalize(char **str)
{
	int		i;
	char	*tmp;

	i = 0;
	temp = str;
	while (*temp)
	{
		if (!(is_alpha(*temp)))
			break ;
		temp++;
		i++;
	}
	if (**str >= 'a' && **str <= 'z')
		**str -= 32;
	*str += (i - 1);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (is_alpha(*temp))
			capitalize(&temp);
		temp++;
	}
	return (str);
}
