/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** getnbr
*/

int my_getnbr(char *str)
{
    int i = 0, result = 0;
    int a = 0;
    while (str[i]) {
        if (str[i] == '-')
            a = 1;
        else {
            result = result * 10;
            result = result + str[i] - 48;
        }
        i = i + 1;
    }
    if (a == 1)
        result = result * (- 1);
    return result;
}
