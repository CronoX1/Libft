#include "../libft.h"
#include <stdio.h>
#include </usr/include/bsd/string.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char s1[50] = "";
	char s2[50] = "";
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	int myarray[10];
	int value = 0;
	int i = 0;
	int *ptr;
	const char *s3 = "Hola mundo!";
	char *s4 = ft_strdup(s3);
	char *s5 = "";
	char *s6 = "";

	printf("ft_atoi vale %i\n", ft_atoi("945"));
	printf("ft_strncmp vale %i\n", ft_strncmp("abc", "abc", 7));
	printf("strncmp vale %i\n", strncmp("abc", "abc", 7));
	printf("ft_strlen vale %zu\n", ft_strlen("hola"));
	printf("ft_strnstr vale %s\n", ft_strnstr("e", "Hola como estas", 5));
	printf("ft_strchr vale %s\n", ft_strchr("Hola como estas", 'e'));
	printf("strchr vale %s\n", strchr("Hola como estas", 'e'));
	printf("ft_strrchr vale %s\n", ft_strrchr("Hola como estas", '\0'));
	printf("strrchr vale %s\n", strrchr("Hola como estas", '\0'));
	printf("ft_strlcpy vale %lu\n", ft_strlcpy(s1, "lorem ipsum", 3));
	printf("s1 vale %s\n", s1);
	printf("s2 vale %s\n", s2);
	printf("memcpy vale %p\n", memcpy(s2, "Ho\200la", 4));
	printf("ft_memcpy vale %p\n", ft_memcpy(s1, "ho\200la", 4));
	memcpy(s2, "Hola como estas", 15);
	printf("s1 vale %s\n", s1);
	printf("s2 vale %s\n", s2);
	printf("ft_memcmp vale %i\n", ft_memcmp("ho\0la", "ho\200le", 4));
	printf("memcmp vale %i\n", memcmp("ho\0la", "ho\200le", 4));
	printf("ft_memchr vale %p\n", ft_memchr(s, 0, 0));
	printf("memchr vale %p\n", memchr(s, 0, 0));
	printf("ft_memset vale %p\n", ft_memset(myarray, value, 10));
	while (i < 10)
	{
		printf("Valor de myarray[%d]: %d\n", i, myarray[i]);
		++i;
	}
	i = 0;
	printf("memset vale %p\n", memset(myarray, value, 10));
	while (i < 10)
	{

		printf("Valor de myarray[%d]: %d\n", i, myarray[i]);
		++i;
	}
	ptr = (int *)ft_calloc(10, sizeof(int));
	printf("ft_calloc vale %p\n", ptr);
	i = 0;
	while (i < 11)
	{
		printf("El valor de p es: %d\n", ptr[i]);
		++i;
	}
	printf("s4 vale: %s\n", s4);
	printf("ft_substr vale: %s\n", ft_substr("", 0, 0));
	printf("ft_strjoin vale: %s\n", ft_strjoin(s5, s6));
	printf("ft_strtrim vale: %s\n", ft_strtrim("tyjHola mundotyj", "jty"));
	char **split = ft_split("hola mundo   esto es una frase", ' ');
	i = 0;
	while (split[i])
	{
		printf("ft_split vale: %s\n", split[i]);
		++i;
	}
}
