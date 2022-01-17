
#include "../calc.h"
#include <stdio.h>

void    ft_error(int err)
{
    if (err == -1)
        printf("\x1b[31;1mError:\x1b[0m Not enough arguments \x1b[1m(Ex: ./calc 4 + 5)\n");
    else if (err == -2)
        printf("\x1b[31;1mError:\x1b[0m Entered number has extra characters \x1b[1m(Ex: '4d + 5)\n");
    else if (err == -3)
        printf("\x1b[31;1mError:\x1b[0m Entered ops has extra characters \x1b[1m(Ex: '4 +/ 5)\n");
    else if (err == -4)
        printf("\x1b[31;1mError:\x1b[0m Division by zero \x1b[1m(Ex: '12 / 0)\n");
    exit(0);
}