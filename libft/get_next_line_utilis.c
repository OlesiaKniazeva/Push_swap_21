#include "libft.h"

char	*ft_strchr_g(const char *s, int c)
{
	char	d;

	d = c - '0';
	while (s && *s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
