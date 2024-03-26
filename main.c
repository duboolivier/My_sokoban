/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "my_sokoban.h"

char **creer_la_map(char *buffer)
{
    char **map;

    map = big_malloc(buffer);
    tableau(map, buffer);
    return (map);
}

int fin_game(char *buffer, char **terrain, char **sv_map)
{
    int end = -1;
    int nb_rows = ligne(buffer);

    end = show(buffer, terrain, sv_map, nb_rows);
    return (end);
}

int main(int argc, char **argv)
{
    char *buffer;
    char **map;
    char **saved_map;
    int end = 0;

    if (argc == 2 && my_strcmp(argv[1], "-h") == 0)
        tire_h();
    else if (erreur(argv) == 84)
        return (84);
    else {
        buffer = open_all(argv[1]);
        map = creer_la_map(buffer);
        saved_map = creer_la_map(buffer);
        end = fin_game(buffer, map, saved_map);
    }
    return (end);
}
