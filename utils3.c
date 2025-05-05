/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.line[i]                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-aziz <fel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:33:51 by fel-aziz          #+#    #+#             */
/*   Updated: 2025/05/05 09:41:51 by fel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int  has_double_player(const char *line)
{
    int j = 0;
    while (line[j])
    {
        if (line[j] == 'N' || line[j] == 'S' ||
            line[j] == 'E' || line[j] == 'W')
            return 1;
        j++;
    }
    return 0;
}	


int invalid_char( char *line)
{
    int i = 0;
    while (line[i])
    {
        if (line[i] != '0' && line[i] != '1' && line[i] != 'N' && line[i] != 'S' && line[i] != 'E' &line[i] != 'W' && line[i] != ' ')
        {
            return 1; 
        }
        i++;
    }
    return 0; 
}



