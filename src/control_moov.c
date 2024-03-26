/*
** EPITECH PROJECT, 2023
** control
** File description:
** moove
*/

#include "my.h"
#include "my_sokoban.h"

void gauche(char **map, int pi, int pj, char **saved_map)
{
    char current_cell = map[pi][pj];
    char left_cell = map[pi][pj - 1];

    if (left_cell != '#' && left_cell != 'X') {
        map[pi][pj - 1] = current_cell;
        map[pi][pj] = ' ';
    } else if (left_cell == 'X' && map[pi][pj - 2] != '#'
        && map[pi][pj - 2] != 'X') {
        map[pi][pj - 2] = 'X';
        map[pi][pj - 1] = current_cell;
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && left_cell != '#'
        && left_cell != 'X') {
        map[pi][pj] = 'O';
    }
}

void droite(char **map, int pi, int pj, char **saved_map)
{
    char current_cell = map[pi][pj];
    char right_cell = map[pi][pj + 1];

    if (right_cell != '#' && right_cell != 'X') {
        map[pi][pj + 1] = current_cell;
        map[pi][pj] = ' ';
    } else if (right_cell == 'X' && map[pi][pj + 2] != '#'
        && map[pi][pj + 2] != 'X') {
        map[pi][pj + 2] = 'X';
        map[pi][pj + 1] = current_cell;
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && right_cell != '#'
        && right_cell != 'X') {
        map[pi][pj] = 'O';
    }
}

void bas(char **map, int pi, int pj, char **saved_map)
{
    char current_cell = map[pi][pj];
    char down_cell = map[pi + 1][pj];

    if (down_cell != '#' && down_cell != 'X') {
        map[pi + 1][pj] = current_cell;
        map[pi][pj] = ' ';
    } else if (down_cell == 'X' && map[pi + 2][pj] != '#'
        && map[pi + 2][pj] != 'X') {
        map[pi + 2][pj] = 'X';
        map[pi + 1][pj] = current_cell;
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && down_cell != '#'
        && down_cell != 'X') {
        map[pi][pj] = 'O';
    }
}

void haut(char **map, int pi, int pj, char **saved_map)
{
    char current_cell = map[pi][pj];
    char up_cell = map[pi - 1][pj];

    if (up_cell != '#' && up_cell != 'X') {
        map[pi - 1][pj] = current_cell;
        map[pi][pj] = ' ';
    } else if (up_cell == 'X' && map[pi - 2][pj] != '#'
        && map[pi - 2][pj] != 'X') {
        map[pi - 2][pj] = 'X';
        map[pi - 1][pj] = current_cell;
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && up_cell != '#'
        && up_cell != 'X') {
        map[pi][pj] = 'O';
    }
}
