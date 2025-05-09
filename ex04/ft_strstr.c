/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:51:40 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/09 16:16:35 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			break ;
		j = 0;
		i++;
	}
	if (j == 0)
		return (NULL);
	return (&str[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "123";
	char	s2[] = "sdf1sDFg â 12sdjlkh wertg RR34 ASD.s123d";
	char	s3[] = "sdf1sDFg â 12sdjlkh wertg RR34 ASD.sd";
	char	s4[] = "12";
	char	s5[] = "";
	char	s6[] = "sd123f1sDFg â 12sdj123lkh wertg RR34 ASD.s123d";

	printf("found_at: %s\n", ft_strstr(s2, s1));	
	printf("found_at: %s\n", ft_strstr(s3, s1));	
	printf("found_at: %s\n", ft_strstr(s4, s1));	
	printf("found_at: %s\n", ft_strstr(s5, s1));	
	printf("found_at: %s\n", ft_strstr(s6, s1));	
}
*/
