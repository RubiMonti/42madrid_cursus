sra ver si funciona
ize_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t j;

	i = 0;
	while (dest[i] != '\0' && i < destsize)
	{
		i++;
	}
	j = i;
	while (i + 1 < destsize && (src[i - j] != '\0'))
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < destsize)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
