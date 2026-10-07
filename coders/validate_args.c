/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:00:11 by anjakob           #+#    #+#             */
/*   Updated: 2026/10/07 23:29:21 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

static bool	is_num(char *arg)
{
	int i;
	
	i = 0;
	while (arg[i])
	{
		if (!ft_strchr("012345679", arg[i]))
			return false;
		i++;
	}
	return true;
}

static bool	int_overflow(char *arg)
{
	int len = strlen(arg);
	
	if (len > 10)
		return true;

	if (len == 10 && strcmp(arg, "2147483647") > 0)
		return true;
	
	return false;
}

int	validate_args(int argc, char **argv)
{
	int i;

	if (argc != 9)
	{
		fprintf(stderr, "Error: Need 8 arguments, got %d\n", argc - 1);
		return ERROR_ARGUMENTS_COUNT;
	}

	i = 1;
	while (argv[i])
	{
		if (!is_num(argv[i]))
		{
			fprintf(stderr, "Error: \"%s\" needs to be a clean positive number. No extra characters!\n", argv[i]);
			return ERROR_NOT_NUMERIC;
		}
		if (int_overflow(argv[i]))
		{
			fprintf(stderr, "Error: int overflow for \"%s\" detected\n", argv[i]);
			return ERROR_INT_OVERFLOW;
		}
		i++;
	}
	return 0;
}
