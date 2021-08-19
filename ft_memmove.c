#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*src_cpy;
	unsigned char			*dest_cpy;
	size_t					i;

	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dst;
	i = 0;
	if (!src_cpy && !dest_cpy)
		return (NULL);
	if (dest_cpy > src_cpy)
	{
		while (len-- > 0)
		{
			dest_cpy[len] = src_cpy[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest_cpy[i] == src_cpy[i];
			i++;
		}
	}
}