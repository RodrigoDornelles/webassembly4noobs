// add.c
#define export __attribute__((visibility("default")))
#define import extern

import int foo();

export int add (int first, int second)
{
    foo();
    return first + second;
}