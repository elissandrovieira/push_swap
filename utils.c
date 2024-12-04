void	p(int stack1[], int stack2[], int len1, int len2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len1)
	{
		if (i == 0)
		{
			while (j < len2)
			{
				j++;
				stack2[j] = stack2[j - 1];
			}
			stack2[i] = stack1[i];
		}
		else
			stack1[i] = stack1[i - 1];
		i++;
	}
}
