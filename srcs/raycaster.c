/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycaster.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelibal <idelibal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:29:30 by idelibal          #+#    #+#             */
/*   Updated: 2024/03/04 18:32:17 by idelibal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	raycaster_loop(t_map *map)
{
	int	i;

	i = 0;
	while (i < WINDOW_WIDTH)
	{
		init_raycaster_data(map, i);
		calculate_step_and_side_distances(map);
		perform_dda_algorithm(map);
		calculate_wall_distance_and_line_height(map);
		calculate_draw_start_end_and_wall_x(map);
		handle_ray_direction(map, i);
		i++;
	}
	mlx_put_image_to_window(map->window->mlx_ptr, map->window->win_ptr,
		map->data->img, 0, 0);
}
