int	ft_strlen(char *str)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	while (str[cont])
	{
		cont++;
		cont2++;
	}
	return (cont2);
}
