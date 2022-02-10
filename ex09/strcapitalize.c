int is_alpha(char ch)
{
	if (!((ch >= 'a' && ch <= 'z') || ((ch >= '0' && ch <= '9'))))
		return 0;
	return 1;
}

void capitalize(char **str)
{
    int i = 0;
    char *temp = *str;
    while(*temp)
    {
        if(!(is_alpha(*temp)))
            break;
        temp++;
        i++;
    }
	if(**str >= 'a' && **str <= 'z')
		**str -= 32; 
    *str += (i - 1);
}



char *ft_strcapitalize(char *str)
{
    char *temp = str;

    while(*temp)
    {
        if(is_alpha(*temp))
            capitalize(&temp);
        temp++; 
    }
    return str;
}
