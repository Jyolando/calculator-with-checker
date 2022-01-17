#include "calculator/calc.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int randrange(int range_min, int range_max)
{
    return (((double)rand() / RAND_MAX) * (range_max - range_min) + range_min);
}

void    ft_error_checker(int err)
{
    if (err == -1)
        printf("\x1b[31;1mError:\x1b[0m Not enough arguments \x1b[1m(Ex: ./checker 100)\n");
    if (err == -2)
        printf("\x1b[31;1mError:\x1b[0m Entered number has extra characters \x1b[1m(Ex: ./checker 100d)\n");
    exit (0);
}

char **ft_num_to_arrs(int firstnum, int secondnum, char op)
{
    char **nums;

    nums = (char **)malloc(sizeof(char *) * 5);
    nums[0] = NULL;
    nums[1] = ft_itoa(firstnum);
    nums[2] = (char *)malloc(sizeof(char) * 2);
    nums[2][0] = op;
    nums[2][1] = '\0';
    nums[3] = ft_itoa(secondnum);
    nums[4] = NULL;
    return nums;
}

void ft_free_arr(char **arr)
{
    int i = 0;

    while (i < 5)
        free(arr[i++]);
    free(arr);
}

int main(int c, char **v)
{
    int rand_first, rand_sec, i = 0, j = 0, ex, fran = 1, sran = 100;
    char ops[4] = {'+', '-', '/', '*'};
    char **numb;

    if (c != 2 && c != 4)
        ft_error_checker(-1);
    if (c == 2)
        ex = ft_atoi(v[1]);
    if (c == 4)
    {
        ex = ft_atoi(v[1]);
        fran = ft_atoi(v[2]);
        sran = ft_atoi(v[3]);
    }


    while (i < ex)
    {
        rand_first = randrange(fran, sran);
        rand_sec = randrange(fran, sran);

        printf("\x1b[0;35;1mNumbers: \x1b[4m%d | %d\n", rand_first, rand_sec);
        j = 0;
        while (j < 4)
        {
            printf("\x1b[0;1mOperaion: \x1b[0m%c | ", ops[j]);
            numb = ft_num_to_arrs(rand_first, rand_sec, ops[j++]);
            calculator(4, numb);
        }
        i++;
    }
}