#include "ft_push_swap.h"
#include <limits.h>
//puedo utilizar INT_MIN y INT_MAX de la libreria limits.h??
int	ft_atoi(char *str)
{
	int	res;
	int	sig;
	int	i;
	//int	int_min;
	//int	int_max;

	//int_min = -2147483648;
	//int_max = 2147483647;
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
	if (res < INT_MIN || res > INT_MAX || i == 0) 
			return (0);
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
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				if(y != 0 || argv[x][y] != '-')
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
	while ( i < len)
	{
		x = 0;
		while (x < i)
		{
			if (arr[x] == arr[i])
				return  (0);
			x++;
		}
		i++;
	}
	return (1);
}

//esto en teoria sera el papa que controlara las otras fuciones
//y main lo va a llamar para no llamar cada una de las previas por separado
int	main(int argc, char **argv)
{
	int	i;
	int	nums[argc];

	i = 0;
	if (ft_check_int(argc, argv) != 1)
		return (printf("error\n"));
	while (i+1 < argc)
	{
		nums[i] = ft_atoi(argv[i+1]);
		i++;
	}
	i = 0;
	while (i < argc - 1){
		printf("%d\n", nums[i]);
		i++;
	}
	if (ft_check_duplicate(nums, (size_t)argc-1) != 1)
		return (printf("hay duplicados\n"));
	//hay que mirar el min y max
	return (1);
}
