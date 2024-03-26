/*
** EPITECH PROJECT, 2023
** all
** File description:
** get
*/

#include "my.h"

int big_lin(int a, int b)
{
    if (b > a) {
        return b;
    }
    return a;
}

int colone(char *buffer, int i)
{
    int line_1 = 0;
    int line_2 = 0;

    i = 0;
    while (buffer[i] != '\n') {
        line_1++;
        i++;
    }
    i++;
    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            line_1 = big_lin(line_1, line_2);
            line_2 = 0;
            i++;
        } else {
            line_2++;
        }
    }
    return line_1;
}

int ligne(char *buffer)
{
    int nb_rows = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            nb_rows++;
        }
        i++;
    }
    return nb_rows;
}
