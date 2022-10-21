/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:29:05 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 20:59:33 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = (const char *)s;
	i = 0;
	while ((src[i] != (unsigned char)c) && (i < n))
		i++;
	if (n == i)
	{
		return (NULL);	
	}
	return ((char *)(src + i));
}

/*int main()
{
	char name[] = "aymene haloui";
	printf("dyalhom => %s\n", memchr(name, ' ', strlen(name)));
	printf("dyali => %s\n", ft_memchr(name, ' ', strlen(name)));
}*/
