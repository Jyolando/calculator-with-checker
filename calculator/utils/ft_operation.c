#include "../calc.h"
#include <stdio.h>

long long ft_operation(int first, int second, char op)
{
    if (op == '+')
    {
        return (first + second);
    }
    if (op == '-') {

        return (first - second);
    }
    if (op == '*')
        return (first * second);
    if (op == '/')
    {
        if (second == 0)
            ft_error(-4);
        return (first / second);
    }
    return (0);
}