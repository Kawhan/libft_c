#include <stddef.h>
#include <stdio.h>

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main(void)
{
	char	s[100];
	char	sbis[100];
	int		i;

	s[100] = "aaaaa";
	sbis[100] = "aaaaa";
	printf("Test de ft_bzero :\n");
	strcpy(sbis, s);
	bzero(s, 3);
	ft_bzero(sbis, 3);
	i = 0;
	while (i < 5 && s[i] == sbis[i])
		i++;
	if (i == 5)
		printf("OK\n");
	else
		printf("Failed : expected [%c][%c][%c][%c][%c], got [%c][%c][%c][%c][%c].\n", s[0], s[1], s[2], s[3], s[4], sbis[0], sbis[1], sbis[2], sbis[3], sbis[4]);
	
}
