
char *ft_strcpy(char *dest, char *src) {
  char *tmp;

  tmp = dest;
  while (*src) 
    *dest++ = *src++;
  *dest = *src;
  return tmp;
}
