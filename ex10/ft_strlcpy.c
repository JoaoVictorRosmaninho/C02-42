

unsigned int ft_strlen(char *s) {
  char *tmp = s; 
  while (*s++);
  return ((int) (s - tmp) - 1);
}


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
 unsigned int i = 0; 
 
 while (i < (size - 1) && src[i]) { 
   dest[i] = src[i];
   i++;
 }
 dest[i] = '\0'; 
 return (ft_strlen(src));
}
