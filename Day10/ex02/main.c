#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int inc_num(int n)
{
	return n + 5;
}

int	main()
{
	int test1[] = {1,2,3,4,5};

	int* res = ft_map(test1, 5, &inc_num);
	for (int i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test2[] = {-25,0,20,45};

	res = ft_map(test2, 4, &inc_num);
	for (int i = 0; i < 4; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test3[] = {5};

	res = ft_map(test3, 1, &inc_num);
	for (int i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	free(res);
}