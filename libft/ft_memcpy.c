/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtozzi-b <mtozzi-b@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:50 by mtozzi-b          #+#    #+#             */
/*   Updated: 2025/01/14 22:22:56 by mtozzi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*bytes_dst;
	const unsigned char	*bytes_src;

	i = 0;
	bytes_dst = (unsigned char *)dst;
	bytes_src = (const unsigned char *)src;
	while (n)
	{
		bytes_dst[i] = bytes_src[i];
		i++;
		n--;
	}
	return (dst);
}
