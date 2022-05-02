/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"

int get_nb_bits(ll *list)
{
    ll *tmp = list;
    int big_nb = 0;
    while (list != NULL) {
        int nb = list -> value;
        if (nb < 0)
            nb = nb * (- 1);
        if (nb > big_nb)
            big_nb = nb;
        list = list -> next;
    }
    list = tmp;
    int nb_bits = 0;
    while (big_nb != 0) {
        big_nb = big_nb / 2;
        nb_bits += 1;
    }
    return nb_bits;
}

int test_tri(ll *list)
{
    ll *tmp = list;
    if (list)
    while (list -> next != NULL) {
        if (list -> next -> value < list -> value)
            return 1;
        list = list -> next;
    }
    list = tmp;
    return 0;
}

ll *do_negative(ll *l_a, ll *last)
{
    int is_negative = 0;
    ll *tmp = l_a;
    for (int i = 0; l_a != NULL; i++) {
        if (l_a -> value < 0)
            is_negative = 1;
        l_a = l_a -> next;
    }
    l_a = tmp;
    if (is_negative == 0)
        return l_a;
    while (l_a -> value > 0) {
        rotate(&l_a, &last);
        write(1, "ra ", 3);
    }
    return l_a;
}

void radix(ll *l_a, int len_list, ll*last_a)
{
    int nb_bits = get_nb_bits(l_a), cmp = 0;
    long long nb_bits_2 = my_square_root(2, nb_bits + 1);
    ll *l_b = NULL; ll *last_b = l_b;
    for (long long i = 1; i < nb_bits_2; i = i * 2) {
        for (int x = 0; x < len_list; x++) {
            if ((l_a -> value & i) != 0) {
                move_element(&l_a, &l_b, &last_b, &last_a);
                write(1, "pb ", 3); rotate(&l_b, &last_b);
                write(1, "rb", 2); cmp += 1;
            } else {
                rotate(&l_a, &last_a); write(1, "ra", 2); }
            write(1, " ", 1);
        }
        for (int j = 0; j < cmp; j++) {
            move_element(&l_b, &l_a, &last_a, &last_b);
            write(1, "pa ", 3); rotate(&l_a, &last_a);
            write(1, "ra ", 3); }
        cmp = 0;
    }
    l_a = do_negative(l_a, last_a); write(1, "rrb\n ", 4);
}
