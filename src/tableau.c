/*
** EPITECH PROJECT, 2023
** tab
** File description:
** ze
*/

#include "my.h"
#include "my_sokoban.h"

char **tableau(char **tab, char *buffer)
{
    int i = 0;
    int j = 0;
    int idx = 0;

    for (idx = 0; buffer[idx] != '\0'; ++idx) {
        if (buffer[idx] == '\n') {
            tab[i][j] = buffer[idx];
            ++i;
            j = 0;
        } else {
            tab[i][j] = buffer[idx];
            ++j;
        }
    }
    return tab;
}
