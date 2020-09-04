#include <math.h>
#include <string.h>

#include "atoi.h"

int atoi(char *s)
{
    int i, digit, multiply, counter;

    if(!s)
        return 0;

    multiply = 0;
    counter = 0;

    for(i = strlen(s) - 1; i >= 0; i--)
    {
        digit = *(s + i) - 48;
        if (digit < 0 || digit > 9)
            return 0;

        counter += digit * pow(10, multiply);
        multiply++;
    }

    return counter;
}