
char *ft_strlowcase(char *str) {
  char *tmp = str;

  while (*tmp) {
    if (*tmp >= 'A' && *tmp <= 'Z')
      *tmp += 32; 
    tmp++;
  }
  return (str);
}
