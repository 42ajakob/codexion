/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codexion.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:14:36 by anjakob           #+#    #+#             */
/*   Updated: 2026/10/08 00:08:23 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CODEXION_H
# define CODEXION_H

#define ERROR_ARGUMENTS_COUNT 1
#define ERROR_NOT_NUMERIC 2
#define ERROR_INT_OVERFLOW 3

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <pthread.h>
#include <sys/time.h>

#include <stdbool.h>

typedef struct simulation_settings
{
	size_t	number_of_coders;
	size_t	time_to_burnout;
	size_t	time_to_compile;
	size_t	time_to_debug;
	size_t	time_to_refactor;
	size_t	number_of_compiles_required;
	size_t	dongle_cooldown;
	size_t	scheduler;
}	t_simulation_settings;

typedef struct coder
{
	size_t	id;
	size_t	dongle;
}	t_coder;

typedef struct monitor_thread
{
	size_t burnout;
}	t_monitor_thread;

// utils.c
// int	clean_up();
char	*ft_strchr(const char *s, int c);

int		validate_args(int argc, char **argv);
int		parse_args(t_simulation_settings *settings, char **argv);
int		coder_loop();

#endif
