/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaykesandes <kaykegy@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:51:56 by kaykesandes       #+#    #+#             */
/*   Updated: 2024/03/29 22:54:15 by kaykesandes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libkay.h"

int ft_sum_array(const int *values, size_t count) {
    int sum;
    size_t i;

    i = 0;
    sum = 0;
    if (count == 0) {
        return 0;
    }
    while (i < count) {
        sum += values[i];
        i++;
    }
    return sum;
}