/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelibal <idelibal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:29:09 by idelibal          #+#    #+#             */
/*   Updated: 2024/03/04 19:09:33 by idelibal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	t_map		map;
	t_player	player;
	t_data		data;
	t_window	window;
	t_rcst		rcst;

	map.player = &player;
	map.data = &data;
	map.window = &window;
	map.rcst = &rcst;
	if (ac == 2)
	{
		init(&map);
		open_and_init_map(av[1], &map);
		map_validation(&map, &player);
		game_start(&map);
		free_map(&map);
	}
	else
		printf("Error: Invalid number of arguments\n");
	return (0);
}
