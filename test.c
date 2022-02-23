/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:05:23 by lwee              #+#    #+#             */
/*   Updated: 2022/02/23 18:19:20 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	void	*b;
	unsigned char	*bb;
	int	c;
	size_t	len;
	size_t	count;

	len = 3;
	count = 0;
	c = 42;

	bb = (unsigned char *)b;
	while (count < len)
		bb[count++] = c;
	printf("%s\n", b);
}
