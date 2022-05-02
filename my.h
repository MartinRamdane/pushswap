/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** myoi_h
*/

#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <grp.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef LIST_H
#define LIST_H

typedef struct linked_list
{
    int value;
    struct linked_list *next;
} ll;

int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_printf(const char *format, ...);
int my_getnbr(char *str);
long long my_square_root(int nb, int puissance);
void rotate(ll **list, ll **last);
void move_element(ll **list1, ll **liste2, ll **last_liste2, ll **last_liste1);
int test_tri(ll *list);
void radix(ll *l_a, int len_list, ll*last_a);
int get_nb_bits(ll *list);
ll *do_negative(ll *l_a, ll *last);

#endif