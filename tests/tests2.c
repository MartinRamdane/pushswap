/*
** EPITECH PROJECT, 2021
** tests2.c
** File description:
** tests2
*/

#include "../my.h"
#include <criterion/criterion.h>

Test(tri, tri_list)
{
    int i = 5;
    int tab[] = {6, -21, 6, -2, -1};
    ll *linked_list = NULL;
    ll *last = malloc(sizeof(ll));
    while (i > 0) {
        ll *element = malloc(sizeof(ll));
        element -> value = tab[i - 1];
        element -> next = linked_list;
        if (i == 5)
            last = element;
        linked_list = element;
        i -= 1;
    }
    ll* result = do_negative(linked_list, last);
    cr_assert_eq(result -> value, -21);
}