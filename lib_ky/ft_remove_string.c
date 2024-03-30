/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaykesandes <kaykegy@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:16:25 by kaykesandes       #+#    #+#             */
/*   Updated: 2024/03/29 22:40:16 by kaykesandes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libkay.h"

void ft_remove_string(char *str_in, char *str_out) {
    int size_str_in;
    int size_str_out;

    size_str_in = ft_strlen(str_in);
    size_str_out = ft_strlen(str_out);

    char * point = strstr(str_in, str_out);

    if (point) {
        int position = (point - str_in);
        point =  point + size_str_out;
        
        unsigned long int i;
        i = 0;
        while (i < ft_strlen(point)) {
            str_in[position + i] = point[i];
            i++;
        }
        str_in[position + i] = 0;
    }
}