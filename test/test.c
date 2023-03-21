#include "../libft.h"
#include <stdio.h>
#include </usr/include/bsd/string.h>
#include <unistd.h>

int	main(void)
{
	char s1[50] = "";
	char s2[50] = "";
	printf("ft_atoi vale %i\n", ft_atoi("945"));
	printf("ft_strncmp vale %i\n", ft_strncmp("test\200", "test\0", 6));
	printf("strncmp vale %i\n", strncmp("test\200", "test\0", 6));
	printf("ft_strlen vale %zu\n", ft_strlen("hola"));
	printf("ft_strnstr vale %s\n", ft_strnstr("e", "Hola como estas", 5));
	printf("ft_strchr vale %s\n", ft_strchr("Hola como estas", 'e'));
	printf("strchr vale %s\n", strchr("Hola como estas", 'e'));
	printf("ft_strlcpy vale %lu\n", ft_strlcpy(s1, "", 15));
	printf("strlcpy vale %li\n", strlcpy(s2, "", 15));
	printf("memcpy vale %p\n", memcpy(s2, "Hola como estas", 15));
	printf("memcpy vale %p\n", ft_memcpy(s1, "Hola como estas", 15));
	memcpy(s2, "Hola como estas", 15);
	printf("s1 vale %s\n", s1);
	printf("s2 vale %s\n", s2);
}
