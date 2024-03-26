/*
** EPITECH PROJECT, 2023
** my_sokoban.h
** File description:
** my_sokoban.h
*/

#include <curses.h>

#ifndef __MY_SOKOBAN_H__
    #define __MY_SOKOBAN_H__

    #define MAX_ITERATIONS 1000


char *open_all(char const *filepath);
int ligne(char *buffer);
int colone(char *buffer);
char **big_malloc(char *buffer);
int show(char *buffer, char **map, char **saved_map, int nb_rows);
char **my_sokoban(char const *filepath);
int divise(char **array, int nb_rows);
char **tableau(char **tab, char *buffer);
int erreur(char **av);
void tire_h(void);
void gauche(char **map, int pi, int pj, char **saved_map);
void droite(char **map, int pi, int pj, char **saved_map);
void haut(char **map, int pi, int pj, char **saved_map);
void bas(char **map, int pi, int pj, char **saved_map);
char **all_mov(int input, char **map, int nb_rows, char **saved_map);
char **dep_gauche(char **map, int nb_rows, char **saved_map);
char **dep_droite(char **map, int nb_rows, char **saved_map);
char **dep_bas(char **map, int nb_rows, char **saved_map);
char **dep_haut(char **map, int nb_rows, char **saved_map);
void fenetre(char **map, char *buffer);
int open_close(char const *filepath);
long taille(char const *filepath);
int main(int argc, char **argv);

#endif /*__MY_SOKOBAN_H__*/
