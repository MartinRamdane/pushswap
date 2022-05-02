/*
** EPITECH PROJECT, 2021
** tests1.c
** File description:
** tests1
*/

#include "../my.h"
#include <criterion/criterion.h>

Test(is_sorted, test_if_the_list_is_sorted)
{
    int i = 5;
    ll *linked_list = NULL;
    while (i > 0) {
        ll *element = malloc(sizeof(ll));
        element -> value = i;
        element -> next = linked_list;
        linked_list = element;
        i -= 1;
    }
    int result = test_tri(linked_list);
    cr_assert_eq(result, 0);
}

Test(get_nbr, test_if_good_nbr)
{
    int result = my_getnbr("32");
    cr_assert_eq(result, 32);
}

Test(square_root, test_if_good_square)
{
    int result = my_square_root(2, 4);
    cr_assert_eq(result, 32);
}

Test(nb_bits, get_nb_bits)
{
    int i = 5;
    int tab[] = {6, 3, 1, 3, 9};
    ll *linked_list = NULL;
    while (i > 0) {
        ll *element = malloc(sizeof(ll));
        element -> value = tab[i - 1];
        element -> next = linked_list;
        linked_list = element;
        i -= 1;
    }
    int result = get_nb_bits(linked_list);
    cr_assert_eq(result, 4);
}

Test(negatifs, do_negatifs)
{
    int i = 5;
    int tab[] = {6, -21, -6, -2, -1};
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
    radix(linked_list, 5, last);
}