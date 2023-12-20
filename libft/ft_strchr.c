char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	new_c;

	i = 0;
	len = 0;
	new_c = (char)c;
	while (s[i] != 0)
	{
		len++;
		i++;
	}
	if (new_c == 0)
		return ((char *)&s[len]);
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == new_c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
