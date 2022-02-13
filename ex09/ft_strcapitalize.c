/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:52:49 by jv                #+#    #+#             */
/*   Updated: 2022/02/13 00:32:08 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch)
{
	if (!((ch >= 'a' && ch <= 'z') || ((ch >= '0' && ch <= '9'))
			|| ((ch >= 'A' && ch <= 'Z'))))
		return (0);
	return (1);
}

void	capitalize(char **str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = *str;
	while (*temp)
	{
		if (!(is_alpha(*temp)))
			break ;
		if (*temp >= 'A' && *temp <= 'Z')
			*temp += 32;
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
