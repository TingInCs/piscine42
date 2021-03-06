/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:03:53 by tliao             #+#    #+#             */
/*   Updated: 2019/08/12 18:08:03 by tliao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		flag;
	char	c;

	flag = 1;
	while (*str != '\0')
	{
		c = *(str++);
		if (c >= '0' && c <= '9')
			flag = 1;
		else
			return (0);
	}
	return (flag);
}
