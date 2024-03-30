/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaykesandes <kaykegy@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:20:40 by kaykesandes       #+#    #+#             */
/*   Updated: 2024/03/29 22:27:52 by kaykesandes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libkay.h"

int ft_strlen(const char *string){
    unsigned long int count;

    count = 0;
    while(string[count] != '\0'){
        count++;
    }
    return (count);
}