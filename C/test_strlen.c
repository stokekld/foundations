#include <assert.h>

#include "strlen.h"

int main()
{
    assert(strlen("") == 0);
    assert(strlen("hello") == 5);
    assert(strlen("world") == 5);
    return 0;
}