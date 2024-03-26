/*
** EPITECH PROJECT, 2023
** mallo
** File description:
** gr
*/

#include "my.h"
#include "my_sokoban.h"

char **big_malloc(char *buffer)
{
    char **arr;
    int rows = ligne(buffer);
    int cols = colone(buffer);
    int i = 0;

    arr = malloc(sizeof(char *) * (rows + 1));
    i = 0;
    while (i != rows) {
        arr[i] = malloc(sizeof(char) * (cols + 1));
        i++;
    }
    arr[i] = NULL;
    return arr;
}
