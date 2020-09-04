#include <stdio.h>
#include <assert.h>

#include "atoi.h"

int main()
{
    assert(atoi(NULL) == 0);
    assert(atoi("") == 0);
    assert(atoi("576") == 576);
    assert(atoi("6") == 6);
    assert(atoi("47") == 47);
    assert(atoi("4.7") == 0);
    return 0;
}