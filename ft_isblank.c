int	ft_isblank(int c)
{
	if(c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
