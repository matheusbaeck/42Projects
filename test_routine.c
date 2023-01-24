#include "ProjLibft/ft_islower.c"
#include "ProjLibft/ft_strlen.c"
#include "ProjLibft/ft_itoa.c"


int	main(void)
{
	char	*str;

	str = ft_itoa(-1);
	str = ft_itoa(0);
	str = ft_itoa(1);
	str = ft_itoa(42);
	ft_islower('a');
	return (0);
}
