#ifndef CALC_H
# define CALC_H

#include <stdio.h>
#include <stdlib.h>

void    ft_error(int err);
int     ft_isdigit(char c);
int	ft_atoi(const char *str);
long long ft_operation(int first, int second, char op);

int *create_num_array(int c, char **v);
char *create_ops_array(int c, char **v);

void calculator(int c, char **v);

#endif