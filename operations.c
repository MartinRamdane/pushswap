/*
** EPITECH PROJECT, 2021
** operations.c
** File description:
** operations
*/

#include "my.h"

void rotate(ll **list, ll **last)
{
    ll *tmp_list = malloc(sizeof(ll));
    tmp_list = *list;
    if (tmp_list -> next != NULL) {
        ll *tmp_last = malloc(sizeof(ll));
        tmp_last = *last;
        tmp_last -> next = *list;
        tmp_last = *list;
        *list = tmp_list -> next;
        tmp_list -> next = NULL;
        *last = tmp_last;
    }
}

void move_element(ll **list1, ll **liste2, ll **last_liste2, ll **last_liste1)
{
    if (*last_liste2 == NULL)
        *last_liste2 = *list1;
    ll *tmp_list1 = malloc(sizeof(ll));
    tmp_list1 = *list1;
    ll *tmp_liste2 = malloc(sizeof(ll));
    tmp_liste2 = *liste2;
    *list1 = tmp_list1 -> next;
    if (*list1 == NULL)
        *last_liste1 = NULL;
    tmp_list1 -> next = *liste2;
    *liste2 = tmp_list1;
}