/*
** EPITECH PROJECT, 2023
** mazgr
** File description:
** fentre
*/

#include "my.h"
#include "my_sokoban.h"

void window(void)
{
    initscr();
}

int show(char *buffer, char **map, char **saved_map, int nb_rows)
{
    int input = 0;
    int end_game = -1;

    window();
    for (int iteration = 0; iteration < MAX_ITERATIONS; iteration++) {
        clear();
        fenetre(map, buffer);
        input = getch();
        map = all_mov(input, map, nb_rows, saved_map);
    }
    return end_game;
}
