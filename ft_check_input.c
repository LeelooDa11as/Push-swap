/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:50:43 by kkoval            #+#    #+#             */
/*   Updated: 2024/03/07 15:57:08 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
//puedo utilizar INT_MIN y INT_MAX de la libreria limits.h?

long int	ft_atoi(char *str)
{
	long int	res;
	int			sig;
	int			i;

	res = 0;
	sig = 1;
	i = 0;
	if (str[0] == '-')
		sig = -1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res = res * sig;
	return (res);
}

int	ft_check_int(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if (y > 10)
				return (0);
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				if (y != 0 || argv[x][y] != '-')
					return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_check_duplicate(int *arr, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	while( i < len)
	{
		x = 0;
		while (x < i)
		{
			if (arr[x] == arr[i])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

int	ft_check_limits(long int num)
{
	if (num < -2147483648 || num > 2147483647)
		return (0);
	return (1);
}

int	ft_check_input(int argc, char **argv)
{
	int			i;
	int			nums[argc]; //variable length array forbidden
	long int	aux;

	i = 0;
	if (!ft_check_int(argc, argv))
		return (0);
	while (i + 1 < argc)
	{
		aux = ft_atoi(argv[i + 1]);
		if (!ft_check_limits(aux))
			return (0);
		nums[i] = (int)aux;
		i++;
	}
	i = 0;
	while (i < argc - 1)
		i++;
	if (!ft_check_duplicate(nums, (size_t)argc - 1))
		return (0);
	return (1);
}
