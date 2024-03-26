/*
** EPITECH PROJECT, 2023
** deplacemetn
** File description:
** move
*/

#include "my.h"
#include "my_sokoban.h"

char **dep_gauche(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i < nb_rows) {
        if (map[i][j] == 'P') {
            pi = i;
            pj = j;
            gauche(map, pi, pj, saved_map);
            return map;
        }
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return map;
}

char **dep_droite(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i < nb_rows) {
        if (map[i][j] == 'P') {
            pi = i;
            pj = j;
            droite(map, pi, pj, saved_map);
            return map;
        }
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return map;
}

char **dep_bas(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i < nb_rows) {
        if (map[i][j] == 'P') {
            pi = i;
            pj = j;
            bas(map, pi, pj, saved_map);
            return map;
        }
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return map;
}

char **dep_haut(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i < nb_rows) {
        if (map[i][j] == 'P') {
            pi = i;
            pj = j;
            haut(map, pi, pj, saved_map);
            return map;
        }
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return map;
}

char **all_mov(int input, char **map, int nb_rows, char **saved_map)
{
    if (input == 67) {
        map = dep_droite(map, nb_rows, saved_map);
    }
    if (input == 68) {
        map = dep_gauche(map, nb_rows, saved_map);
    }
    if (input == 65) {
        map = dep_haut(map, nb_rows, saved_map);
    }
    if (input == 66) {
        map = dep_bas(map, nb_rows, saved_map);
    }
    return map;
}
