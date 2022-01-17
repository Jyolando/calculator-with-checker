#include "../calc.h"
#include <stdio.h>
#include <stdlib.h>

static char ft_isop(char *str)
{
    int i = 0, flag = 1;
    

    while (str[i] != '\0')
    {
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')
            flag = 0;
        i++;
    }

    //printf("%d %d", i, flag);
    if (i != 1 || (i == 1 && flag == 0))
        ft_error(-3);
    return str[0];
}

char *create_ops_array(int c, char **v)
{
    char *arr;
    int i = 2, j = 0;

    if (c % 2 != 0 || c < 4)
        ft_error(-1);
    
    arr = (char *)malloc(sizeof(char) * (c / 2 - 1));

    while (i < c)
    {
        arr[j++] = ft_isop(v[i]);
        i += 2;
    }
    return arr;
}

int *create_num_array(int c, char **v)
{
    int *arr;
    int i = 1, j = 0;

    if (c % 2 != 0 || c < 4)
        ft_error(-1);
    
    arr = (int *)malloc(sizeof(int) * (c / 2));
    
    while (i <= c)
    {
        arr[j++] = ft_atoi(v[i]);
        i += 2;
    }
    return (arr);
}
