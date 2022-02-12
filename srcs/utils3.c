/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbendu <sbendu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:24:03 by sbendu            #+#    #+#             */
/*   Updated: 2022/02/12 12:42:17 by sbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

char	*ft_parse_2(int argc, char **argv, char *s)
{
	int		i;
	char	*tmp;

	i = 1;
	s = ft_strjoin(s, argv[++i]);
	if (!s)
		exit(1);
	while (i < argc - 1)
	{
		tmp = s;
		s = ft_strjoin(s, argv[++i]);
		free(tmp);
		if (!s)
			exit(1);
	}
	return (s);
}
