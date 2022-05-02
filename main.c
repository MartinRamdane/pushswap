/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** compute main root
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 1)
        return 84;
    int i = ac - 1;
    ll *linked_list = NULL;
    ll *last = malloc(sizeof(ll));
    while (i > 0) {
        ll *element = malloc(sizeof(ll));
        element -> value = my_getnbr(av[i]);
        element -> next = linked_list;
        if (i == ac - 1)
            last = element;
        linked_list = element;
        i -= 1;
    }
    if (test_tri(linked_list) == 1)
        radix(linked_list, ac - 1, last);
    else {
        write(1, "\n", 1); return 0;
    }
    return 0;
}