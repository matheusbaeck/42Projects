
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	i  = 0;
	while (i  < len && *((unsigned int *)b + i))
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *((unsigned int *)src + i))
	{
		ft_memset(dst, *((unsigned int *)src + i), 1);
		i++;
	}
	return (dst);
}

int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int i = 0;
    memcpy(arr + 2, arr, sizeof(int)*5);
    printf("memcpy:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}