#include <stddef.h>

void	*ft_memset(void *s, int c, size_t len)
{
	char	*str;

	str = (char *)s;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (s);
}

int	main(void)
{
	char	str[30];

	strcpy(str, "String de teste para função");
	puts(str);
	ft_memset(str, '0', 5);
	puts(str);
	return (0);
}
