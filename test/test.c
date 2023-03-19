#include "../libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft_atoi vale %i\n", ft_atoi("945"));
	printf("ft_strncmp vale %i\n", ft_strncmp("test\200", "test\0", 6));
	printf("strncmp vale %i\n", strncmp("test\200", "test\0", 6));
	printf("ft_strlen vale %zu\n", ft_strlen("hola"));
	printf("ft_strnstr vale %s\n", ft_strnstr("", "coucou", -1));
	printf("ft_strnstr vale %s\n", strnstr("", "coucou", -1));
	printf("ft_strchr vale %s\n", ft_strchr("hola como estas", 'c'));
}
