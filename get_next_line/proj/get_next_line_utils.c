#include "libft.h"
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcatchr(char *dst, const char *src, size_t dstsize, int c);
{
	size_t	i;
	size_t	start;

	i = 0;
	start = ft_strlen(dst);
	if (dstsize <= 0)
		return (ft_strlen(src) + dstsize);
	while (start + i < (dstsize - 1)
		&& src[i] != c)
	{
		dst[start + i] = src[i];
		i++;
		if (!(src[i]))
		{
			dst[start + i] = src[i];
			return (ft_strlen(dst));
		}
	}
	if ((start + i) < dstsize)
		dst[start + i] = '\0';
	if (start > dstsize)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + start);
}
