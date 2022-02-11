#include <unistd.h>

unsigned char	g_hexatable[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};

void	hexconvert(unsigned int num)
{
	char	txt_hexa[2];
	int 	i;

	i = 2;
	while (i--)
	{
		txt_hexa[i] =  g_hexatable[num % 16];
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

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_valid(*(unsigned char *)str) == 0)
		{
			hexconvert(*(unsigned *)str);
			str++;
			continue ;
		}
		write(1, str, 1);
		str++;
	}
}
