int	ft_find_len(char *str, int n)
{
	int counter;

	counter = 0;
	while(str[counter] != '\0' && counter < n)
	{
		counter++;
	}
	return(counter);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int ans;

	len1 = ft_find_len(s1, n);
	len2 = ft_find_len(s2, n);
	ans = len1 - len2;
	return ans;
}
