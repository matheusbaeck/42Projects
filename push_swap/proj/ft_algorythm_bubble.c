int ft_is_orded_rev(int **stacks, int stack, int *end)
{
	int i;

	i = -1;
	while (++i < (end[stack] - 1))
	{
		if (ft_is_next(stacks[stack][i], stacks[stack][i + 1], stack) != 1)
			return (i + 1);
	}
	return (i + 1);	
}

int ft_()

void	ft_algorythm_bubble(int **stacks, int stack, int *end)
{

}