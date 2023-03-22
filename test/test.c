#include "../libft.h"
#include <stdio.h>
#include </usr/include/bsd/string.h>
#include <unistd.h>

int	main(void)
{
	char s1[50] = "ho\0la";
	char s2[50] = "ho\0la";
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("ft_atoi vale %i\n", ft_atoi("945"));
	printf("ft_strncmp vale %i\n", ft_strncmp("test\0", "test\200", 6));
	printf("strncmp vale %i\n", strncmp("test\0", "test\200", 6));
	printf("ft_strlen vale %zu\n", ft_strlen("hola"));
	printf("ft_strnstr vale %s\n", ft_strnstr("e", "Hola como estas", 5));
	printf("ft_strchr vale %s\n", ft_strchr("Hola como estas", 'e'));
	printf("strchr vale %s\n", strchr("Hola como estas", 'e'));
	printf("ft_strrchr vale %s\n", ft_strrchr("Hola como estas", 'e'));
	printf("strrchr vale %s\n", strrchr("Hola como estas", 'e'));
	printf("ft_strlcpy vale %lu\n", ft_strlcpy(s1, "", 15));
	printf("strlcpy vale %li\n", strlcpy(s2, "", 15));
	printf("memcpy vale %p\n", memcpy(s2, "Ho\200la", 4));
	printf("ft_memcpy vale %p\n", ft_memcpy(s1, "ho\200la", 4));
	memcpy(s2, "Hola como estas", 15);
	printf("s1 vale %s\n", s1);
	printf("s2 vale %s\n", s2);
	printf("ft_memcmp vale %i\n", ft_memcmp("ho\0la", "ho\200le", 4));
	printf("memcmp vale %i\n", memcmp("ho\0la", "ho\200le", 4));
	printf("ft_memchr vale %p\n", ft_memchr(tab, -1, 7));
	printf("memchr vale %p\n", memchr(tab, -1, 7));
}
