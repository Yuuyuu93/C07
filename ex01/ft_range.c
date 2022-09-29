/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:44:11 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/29 15:54:01 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*f;
	int	r;

	if (min >= max)
		return (NULL);
	max -= min;
	f = malloc(max * sizeof(int));
	if (!t)
		return (NULL);
	while (r++ < max)
		f[r] = min + r;
	return (f);
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("Min = %d, Max = %d -> ", min, max);
}
