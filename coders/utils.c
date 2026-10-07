/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:40:39 by anjakob           #+#    #+#             */
/*   Updated: 2026/10/07 23:11:16 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

// int	clean_up()
// {
	
// }

char	*ft_strchr(const char *s, int c)
{
	char	cast_c;
	int		i;

	cast_c = (char)c;
	i = 0;
	while (s[i] && s[i] != cast_c)
		i++;
	if (s[i] == cast_c)
		return ((char *)&s[i]);
	return (NULL);
}
