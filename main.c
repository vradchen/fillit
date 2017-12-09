/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:42:08 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/21 13:42:09 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int			sizer;
	char		**figures;
	t_cordinate **cordinate_fig;

	sizer = 0;
	if (argc != 2)
		USAGE;
	figures = ft_open_read_close(argv[1]);
	//cordinate_fig = ft_struct_split(figures, sizer); VOT GDE ETA SYKA
	if (figures == NULL)
		return (0);
	if (ft_finale_grade(figures) != 1)
	{
		ERROR;
		return (0);
	}
	while (sizer * sizer < ft_map_size(figures) * 4)
		sizer++;
	sizer = sizer - 4;
	cordinate_fig = ft_struct_split(figures, sizer);
	ft_demon_soul(cordinate_fig, figures, sizer);
	return (0);
}
