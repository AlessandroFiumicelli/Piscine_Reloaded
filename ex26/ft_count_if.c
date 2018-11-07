
int	ft_count_if(char **tab, int (*f)(char**))
{
	int	i;
	int 	cnt;

	cnt = 0;
	i = 0;
	while (tab[i])
	{
		if ((f)(tab[i]) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}
