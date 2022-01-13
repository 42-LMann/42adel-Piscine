#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*temp;

	ret = max - min;
	*range = (int *)malloc(sizeof(int) * ret);
	temp = *range;
	if (min >= max)
		return (0);
	if (!*range)
		return (0);
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
/*
int main (void)
{
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, 1, 6);
	printf("the ammount of intergers in the range is = %d\n", size);
	if (!range)
	{
		printf("Range is set to NULL\n");
		return (0);
	}
	for (int i = 0; i < size; i++)
		printf("%d", range[i]);
	printf("\n");
	return (0);
}*/
