/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:53:51 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/29 20:48:10 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = (int *)malloc(sizeof(int) * (max));
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}
/*
#include <unistd.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("Min = %d, Max = %d -> (bound = %d)", min, max, bound);
}
*/
