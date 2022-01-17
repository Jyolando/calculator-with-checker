#include "calc.h"
#include <stdio.h>

void calculator(int c, char **v)
{
    int i = 0, j = 0;
    long long result;
    int *numarr;
    char *opsarr;

    numarr = create_num_array(c, v);
    opsarr = create_ops_array(c, v);

    result = numarr[i++];

    while (i < c / 2)
        result = ft_operation(result, numarr[i++], opsarr[j++]);
    
    printf("\x1b[0;1mResult: \x1b[32;1m %lld \n", result);
}