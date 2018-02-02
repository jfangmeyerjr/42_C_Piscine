#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	difference;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	difference = *(unsigned char *)s1 - *(unsigned char	*)s2;
	return (difference);
}

int		ft_rev_strcmp(char *s1, char *s2)
{
	int	difference;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	difference = *(unsigned char *)s2 - *(unsigned char	*)s1;
	return (difference);
}

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

#include <stdlib.h>

int		word_counter(char *str);
int		c_count(char *str);
int		white_space(char c);

char	**ft_split_whitespaces(char *str)
{
	char	**answer;
	int		word;
	int		letter;

	answer = (char**)malloc(sizeof(*answer) * (word_counter(str) + 1));
	word = 0;
	while (*str)
	{
		while (white_space(*str) && *str)
			str++;
		if (*str)
		{
			letter = 0;
			if ((answer[word] = malloc(c_count(str) + 1)) == NULL)
				return (NULL);
			while (!white_space(*str) && *str)
			{
				answer[word][letter++] = *str;
				str++;
			}
			answer[word++][letter] = '\0';
		}
	}
	answer[word] = 0;
	return (answer);
}

int		white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

/*
** word_counter iterates through string.
** When it finds a terminator before a non-terminator, it counts a word
*/

int		word_counter(char *str)
{
	int		index;
	int		word_count;

	index = 0;
	word_count = 0;
	while (str[index] != '\0')
	{
		while ((str[index] == ' ' || str[index] == '\t' ||
					str[index] == '\n') && str[index] != '\0')
			index++;
		if (str[index] != ' ' && str[index] != '\t' &&
				str[index] != '\n' && str[index] != '\0')
		{
			word_count++;
			while (str[index] != ' ' && str[index] != '\t' &&
					str[index] != '\n' && str[index] != '\0')
				index++;
		}
		if (str[index] == '\0')
			return (word_count);
		index++;
	}
	return (word_count);
}

int		c_count(char *str)
{
	int	count;

	count = 0;
	while (!white_space(*str) && *str)
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));


int	main()
{
	// char *tab[4] = {"Yacine", "Patrick", "James", "Bruno"};
	char **test;
	int (*cmp)(char *, char *);

	test = ft_split_whitespaces("A a B\n?? zany 42");
	int i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	printf("ordering...\n");
	cmp = &ft_strcmp;
	ft_advanced_sort_wordtab(test, ft_strcmp);
	i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}


// int	main()
// {
// 	int (*cmp)(char *, char *);
// 	char *tab[4] = {"Yacine", "Patrick", "James", "Bruno"};

// 	cmp = &ft_rev_strcmp;
// 	ft_advanced_sort_wordtab(tab, cmp);
// 	printf("%s\n%s\n%s\n%s\n", tab[0], tab[1], tab[2], tab[3]);
// 	return (0);
// }