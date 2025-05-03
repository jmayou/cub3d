/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-aziz <fel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 09:14:17 by fel-aziz          #+#    #+#             */
/*   Updated: 2025/05/03 19:48:14 by fel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <unistd.h>

void	check_file_extension(char *av)
{
	int	len;

	len = ft_strlen(av);
	if (len < 5 || ft_strncmp(av + len - 4, ".cub", 4) != 0)
	{
		ft_printf("Error\nThe file must end with .cub\n");
		exit(1);
	}
}

void process_element(int  fd)
{
	char	*line;
	char **str; // ana hleft
	line = get_next_line(fd);
	while (line != NULL)
	{
		if(check_is_empty(line) == 1 )
		{
			str = ft_split(line, ' ');
			if((ft_len(str) == 3 && ft_strncmp("\n",str[2],1) == 0 ) || ft_len(str) == 2)
			{
				printf("is valide\n");
			}
			else
			{
				ft_printf("error\nthe line < %s > contain mor than 2 string\n",line);
				// free 
				//  
				exit(1);
			}
			// check if start white dk horof and 2 world 
			//  IF start by W call the func that check if caracter de W 
		}
		line = get_next_line(fd);
	}
}


int	main(int ac, char *av[])
{
	int		fd;
	

	if (ac != 2)
	{
		ft_printf("Error\nThis program accepts exactly two arguments.\n");
		return (1);
	}
	check_file_extension(av[1]);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("error\n");
		return (1);
	}
	process_element(fd);
	return (0);
}
