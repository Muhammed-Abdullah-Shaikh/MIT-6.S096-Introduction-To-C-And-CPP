#include <stdlib.h>
#include <stdio.h>

void fn()
{
    int* x = malloc(10 * sizeof(int));
    x[0] = 20; // Initializing element at 0th index
    printf("%d",*x);
    // x[10] = 0; // Invalid write of size 4
    x[9] = 0;

    free(x);
}

int main()
{
    fn();
    return 0;
}

// gcc -Wall -std=c99 -o exercise1 exercise1.c
// valgrind --tool=memcheck ./exercise1