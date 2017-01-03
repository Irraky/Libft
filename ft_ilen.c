int	ft_ilen(int n)
{
	int	i;

	i = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
