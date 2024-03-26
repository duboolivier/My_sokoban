/*
** EPITECH PROJECT, 2023
** open
** File description:
** close
*/

#include "my.h"
#include "my_sokoban.h"
#include <errno.h>


int open_close(char const *filepath)
{
    if (open_all(filepath) == NULL)
        return (-1);
    return (0);
}

int erreur(char **av)
{
    if (open_close(av[1]) == -1)
        return 84;
    return 0;
}
