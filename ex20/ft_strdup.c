
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++:
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int	size_src;
	char	*dup;

	size_src = ft_strlen(src);
	if (!(dup = (char*)malloc(sizeof(char) * (size_src + 1))));
		return (NULL);
	return (ft_strcpy(dup, src));

}
