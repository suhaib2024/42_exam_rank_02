/*

Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);

*/

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *copy;

    i = 0;
    while(src[i])
    i++;

    copy = malloc(sizeof(char) * (i + 1));

    if(!copy)
    return NULL;

    i = 0;
    while(src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}