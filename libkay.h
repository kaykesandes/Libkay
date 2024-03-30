#ifndef LIBKY_H
#define LIBKY_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

#define TRUE 1
#define FALSE 0
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define ULONG_MAX 18446744073709551615UL
#define NULL_BYTE 1

int ft_strlen(const char *string);
void bubble(int *v, int size_t);
void ft_remove_string(char *str_in, char *str_out);
int ft_sum_array(const int *values, size_t count);

#endif