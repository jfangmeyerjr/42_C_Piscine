#include <stdio.h>

int	match(char *s1, char *s2);

int main()
{
	printf("%d\n", match("banana","b*a"));
	printf("%d\n", match("abc","a**"));
	printf("%d\n", match("abc*","a**"));
	printf("%d\n", match("abcbd","*b*"));
	printf("%d\n", match("","*a"));
	return (0);
}