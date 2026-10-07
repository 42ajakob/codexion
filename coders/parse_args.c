/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:00:38 by anjakob           #+#    #+#             */
/*   Updated: 2026/10/07 23:17:47 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

int	parse_args(t_simulation_settings *settings, char **argv)
{
	settings->number_of_coders = (size_t)atoi(argv[1]);
	settings->time_to_burnout = (size_t)atoi(argv[2]);
	settings->time_to_compile = (size_t)atoi(argv[3]);
	settings->time_to_debug = (size_t)atoi(argv[4]);
	settings->time_to_refactor = (size_t)atoi(argv[5]);
	settings->number_of_compiles_required = (size_t)atoi(argv[6]);
	settings->dongle_cooldown = (size_t)atoi(argv[7]);
	return 0;
}
