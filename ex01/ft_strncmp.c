/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvolikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:58:36 by pvolikov          #+#    #+#             */
/*   Updated: 2025/05/08 19:11:54 by pvolikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int 	main(void)
{
	char	s0[] = "";
	char	s1[] = "asdfg";
	char	s2[] = "asdfz";
	char	s3[] = "asdfG lkjhasdf";
	char	s4[] = "asdfg lkjhasdfF";

	printf("cmp:\n%s\n%s\nResult-> %d\n\n",s1, s2, ft_strncmp(s1,s2,4));
	printf("cmp:\n%s\n%s\nResult-> %d\n\n",s1, s3, ft_strncmp(s1,s3,0));
	printf("cmp:\n%s\n%s\nResult-> %d\n\n",s1, s4, ft_strncmp(s1,s4,100));
}
*/
