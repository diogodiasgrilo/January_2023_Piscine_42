/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:41:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/01 12:51:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	sign;

	i = 0;
	total = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] >= 9 && str[i] <= 32)
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		total *= 10;
		total += str[i] - 48;
		i++;
	}
	return (total * sign);
}

// void	ft_atoi_like_test(char *str)
// {
// 	int buff;
// 	int ft_buff;

// 	buff = atoi(str);
// 	ft_buff = ft_atoi(str);
// 	if (buff != ft_buff)
// 		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff,
//				ft_buff);
// 	else
// 		printf("> OK. result: %d\n", ft_buff);
// }

// void	ft_atoi_unlike_test(char *str, int expected_result)
// {
// 	int ft_buff;

// 	ft_buff = ft_atoi(str);
// 	if (ft_buff != expected_result)
// 		printf("> KO, invalid int value returned expected: %d got: %d\n",
//				expected_result, ft_buff);
// 	else
// 		printf("> OK, result: %d\n", ft_buff);
// }

// int		main(void)
// {
// 	char *str;

// 	// quando o comportamento e igual ao de atoi
// 	str = " \n \t \r \v +1234567asd";
// 	ft_atoi_like_test(str);
// 	str = " \n \t\f\r \v -1234b67asd";
// 	ft_atoi_like_test(str);
// 	// quando o comportamento e diferente ao de atoi
// 	str = " \n \t \r \v --+-+-+-2147483648asd";
// 	ft_atoi_unlike_test(str, -2147483648);
// 	str = " \n \t\f\r \v -++-+-++1234b67asd";
// 	ft_atoi_unlike_test(str, -1234);
// 	return (0);
// }