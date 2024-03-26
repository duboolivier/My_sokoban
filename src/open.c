/*
** EPITECH PROJECT, 2023
** open_read_file.c
** File description:
** open_read_file.c
*/

#include "my.h"

long taille(char const *chemin)
{
    struct stat s;

    stat(chemin, &s);
    return (s.st_size);
}

char *open_all(char const *chemin)
{
    int ret;
    int fd = open(chemin, O_RDONLY);
    int size = taille(chemin);
    char *buffer;

    buffer = malloc(sizeof(char) * (size + 1));
    if (fd == -1) {
        return (NULL);
    }
    ret = read(fd, buffer, size);
    if (ret == -1) {
        return (NULL);
    }
    buffer[size] = '\0';
    if (close(fd) == -1)
        return (NULL);
    return (buffer);
}
