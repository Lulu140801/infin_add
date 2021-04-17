/*
** EPITECH PROJECT, 2020
** infin_add
** File description:
** calculator infinity
*/

#include "../lib/my.h"
#include <stdlib.h>

void display(char *str, int temp, int size_loop)
{
    if (temp == 1)
        str[size_loop] = temp + 48;
    else
        str[size_loop] = temp + 60;
    my_putstr(str);
}

void calc(char **av, int size_loop, int size1, int size2)
{
    char *str = "NULL";
    int temp = 0;
    int nb1 = 0;
    int nb2 = 0;
    int temp2 = 0;

    str = malloc(sizeof(char) * (size_loop + 2));
    str[size_loop + 1] = '\0';
    for (int nb = 0; size_loop != nb; size_loop--, size1--, size2--) {
        if (temp2 == 0) {
            nb1 = av[1][size1] - 48;
            nb2 = av[2][size2] - 48;
            nb1 = nb1 + nb2;
            nb1 = nb1 + temp;
        } else {
            nb1 = av[temp2][size1] - 48;
            nb1 = nb1 + temp;
        }
        if (nb1 >= 10) {
            nb1 = nb1 - 10;
            temp = 1;
        } else
            temp = 0;
        str[size_loop] = nb1 + 48;
        if (size1 == 0) {
            temp2 = 2;
            size1 = size2;
        } else if (size2 == 0)
            temp2 = 1;
    }
    display(str, temp, size_loop);
}

void infin_add(char **argv)
{
    int size1 = 0;
    int size2 = 0;
    int size_loop = 0;


    size1 = my_strlen(argv[1]);
    size2 = my_strlen(argv[2]);
    if (size1 < size2)
        size_loop = size2;
    else if (size1 > size2)
        size_loop = size1;
    else
        size_loop = size1;
    calc(argv, size_loop, size1 -1, size2 -1);
}

int main(int argc, char **argv)
{
    if (argc == 3) {
        infin_add(argv);
    } else {
        return (84);
    }
    return (0);
}

