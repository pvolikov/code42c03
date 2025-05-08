/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:58:36 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/08 18:51:53 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

/*
#include <stdio.h>
int 	main(void)
{
	char	s1[] = "asdfg";
	char	s2[] = "asdfz";
	char	s3[] = "asdfG lkjhasdf";
	char	s4[] = "asdfg lkjhasdfF";

	printf("Comparing:\n%s\n%s\nResult -> %d\n\n",s1, s2, ft_strcmp(s1,s2));
	printf("Comparing:\n%s\n%s\nResult -> %d\n\n",s1, s3, ft_strcmp(s1,s3));
	printf("Comparing:\n%s\n%s\nResult -> %d\n\n",s1, s4, ft_strcmp(s1,s4));
}
*/
