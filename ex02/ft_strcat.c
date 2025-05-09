/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:15:41 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/09 13:57:57 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	char	*c;

	c = dest;
	while (*c != '\0')
		c++;
	i = 0;
	while (src[i] != '\0')
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

	s0[4] = '\0';

	printf("%s + %s\n", s0, s1);
	ft_strcat(s0, s1);
	printf("=%s\n", s0);

//	printf("%s + %s\n", t0, t1);
//	ft_strcat(t0, t1);
//	printf("=%s\n", t0);

}
*/
