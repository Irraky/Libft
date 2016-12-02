void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*entree;
	char	*sortie;

	entree = (char*)src;
	sortie = (char*)dest;
	i = -1;
	if (n == 0)
		return (NULL);
	if (src == dest)
		return (dest);
	while (++i != n && entree[i] != c)
		entree[i] = sortie[i];
	if (entree[i] == c)
		return (dest + i + 1);
	else
		return (NULL);
}
