/*
** EPITECH PROJECT, 2023
** mad
** File description:
** fenetre
*/

#include "my_sokoban.h"
#include "my.h"

void fenetre(char **map, char *buffer)
{
    int nb_rows = ligne(buffer);
    int nb_cols = colone(buffer);

    if (LINES >= nb_rows + 2 && COLS >= nb_cols + 2) {
        for (int i = 0; i < nb_rows; i++) {
            mvprintw(LINES / 2 - nb_rows / 2 + i,
            COLS / 2 - nb_cols / 2, map[i]);
        }
    }
}
