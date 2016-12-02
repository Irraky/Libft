void *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*sortie;
	char	*entree;

	entree = (char*)src;
	sortie = (char*)dest;
	i = -1;
	if (entree == sortie || n == )
		return (dest);
	while (++i != n)
		sortie[i] = entree[i];
	return (dest);
}
