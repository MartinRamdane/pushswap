/*
** EPITECH PROJECT, 2021
** my_square_root.c
** File description:
** compute square root
*/

#include "my.h"

long long my_square_root(int nb, int puissance)
{
    if (puissance == 0)
        return 1;
    if (puissance == 32)
        return 4294967296;
    if (puissance == 31)
        return 2147483648;
    int i = 0;
    while (i < puissance) {
        nb = nb * 2;
        i = i + 1;
    }
    return nb;
}
