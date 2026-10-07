/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:39:17 by anjakob           #+#    #+#             */
/*   Updated: 2026/10/07 23:51:52 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "codexion.h"

static void	print_doc()
{
	printf(
		"Usage: ./codexion [number_of_coders] [time_to_burnout] "
		"[time_to_compile] [time_to_debug] [time_to_refactor] "
		"[number_of_compiles_required] [dongle_cooldown] [scheduler]\n"
		"Runs a simulation of coders\n\n"
		"	-h, --help	display this help and exit\n"
	);
}

int	main(int argc, char **argv)
{
	t_simulation_settings settings;
	int exit_status;
	
	exit_status = 0;

	if (argc == 2 && (!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")))
		print_doc();
	else
	{
		exit_status = validate_args(argc, argv);
		if (!exit_status)
			exit_status = parse_args(&settings, argv);
		if (!exit_status)
			exit_status = coder_loop();
	}
	return exit_status;
}
