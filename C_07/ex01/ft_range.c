#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*temp;

	ret = (int *)malloc(sizeof(int));
	temp = ret;
	if (min >= max)
		return (0);
	if (!ret)
		return (0);
	while (min < max)
		*(temp++) = min++;
	return (ret);
}

int main(void)
{
	int i;
	int *ptr;

	i = 0;
	ptr = ft_range(3,12);
	while (ptr[i])
	{
		printf("%d, ", ptr[i]);
		i++;
	}
	return (0);
}
