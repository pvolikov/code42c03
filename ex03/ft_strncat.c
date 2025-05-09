/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:15:41 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/09 14:06:03 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	*c;

	c = dest;
	while (*c != '\0')
		c++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s0[] = "abcdXXXXXXXXXXXXXXXXXX";
	char	s1[] = "efghijk";
	int	n;

	s0[4] = '\0';

	n = 10;
	printf("%s + %s (%d)\n", s0, s1, n);
	ft_strncat(s0, s1, n);
	printf("=%s\n", s0);

	n = 3;
	printf("%s + %s (%d)\n", s0, s1, n);
	ft_strncat(s0, s1, n);
	printf("=%s\n", s0);

//	printf("%s + %s\n", t0, t1);
//	ft_strcat(t0, t1);
//	printf("=%s\n", t0);

}
*/
