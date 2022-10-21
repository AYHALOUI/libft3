/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:37:50 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 20:59:39 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	printf("=>%s\n",ft_strchr("aymene haloui", '\0'));
	printf("=>%s\n",strchr("aymene", '\0'));
	return (0);
}*/
