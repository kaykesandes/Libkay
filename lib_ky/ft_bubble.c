/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaykesandes <kaykegy@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:45:00 by kaykesandes       #+#    #+#             */
/*   Updated: 2024/03/29 22:19:33 by kaykesandes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libkay.h"

void bubble(int v[], int size_t){
    int i;
    int aux;
    int trocou;
    
    do {
        size_t--;
        trocou = 0;
        for (i = 0; i < size_t; i++) {
            if(v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocou = 1;
            }
        }
    }while (trocou);
}