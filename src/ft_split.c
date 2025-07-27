#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_all(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
}

static void	get_next_word(char const *s, char c, int *start, int *end)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		end;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = ft_calloc(words + 1, sizeof(char *));
	if (!split)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while (i < words)
	{
		get_next_word(s, c, &start, &end);
		split[i] = ft_substr(s, start, end - start);
		if (!split[i])
			return (free_all(split, i), NULL);
		start = end;
		i++;
	}
	return (split);
}
