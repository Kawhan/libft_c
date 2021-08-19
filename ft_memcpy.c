#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if ((!src && !dest) || !n)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char s[100] = "aaaaa";
	char sbis[100] = "aaaaa";

	printf("Test de ft_memcpy :\n");
	strcpy(sbis, s);
	if (!strcmp(memcpy(s, "source", 3), ft_memcpy(sbis, "source", 3)) && !strcmp(memcpy(s, "2emesource", 8), ft_memcpy(sbis, "2emesource", 8)))
		printf("OK\n");
	else
		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
}
