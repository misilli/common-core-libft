<<<<<<< HEAD
char **ft_split(char const *s, char c)
{
	
=======
char	**ft_split(char const *s, char c)
{
	char **final;
	int i;
	int word;
	int length;
	int j;

	j = 0;

	i = 0;
	word = 0;
	while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            word++;
        i++;
    }
	final = malloc(sizeof(char *) * (word + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (s[i])
	{
		length = 0;
		while (s[i] && s[i] != c)
		{
			length++;
			i++;
		}
		i++;
		final[j] = malloc(sizeof(char) * (length + 1));
		if (!final[j])
			return (NULL);
		j++;
	}
>>>>>>> refs/remotes/origin/main
}