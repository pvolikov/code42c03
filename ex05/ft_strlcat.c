/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:40:36 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/09 17:16:45 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	limit;
	int	dlen;
	int	slen;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dlen = i;
	limit = size - dlen - 1;
	i = 0;
	while (src[i] != '\0' && i < limit)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (dlen + i);
}

/*
#include <stdio.h>
int	main(void)
{
	int	res, len;
	char	s1[] = "abcd";
	char	s2[] = "1234567890XXXXXXXXXXXXXXXXXXXXX";
	char	s3[] = "sdf1sDFg â 12sdjlkh wertg RR34 ASD.sd";
	char	s4[] = "12";
	char	s5[] = "";
	char	s6[] = "sd123f1sDFg â 12sdj123lkh wertg RR34 ASD.s123d";

	s2[15] = '\0';

	len = 18;
	printf("cat: %s and %s\nwith size=%d\n", s2, s1, len);
	res=ft_strlcat(s2, s1, len);
	printf("got:\n%s\nResult is: %d\n", s2, res);
}
*/
