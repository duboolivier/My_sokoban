/*
** EPITECH PROJECT, 2023
** disvi
** File description:
** disvise
*/

#include "my.h"
#include "my_sokoban.h"

int divise(char **array, int nb_rows)
{
    int i = 0;

    while (i != nb_rows) {
        printw(array[i]);
        i++;
    }
    return 0;
}
