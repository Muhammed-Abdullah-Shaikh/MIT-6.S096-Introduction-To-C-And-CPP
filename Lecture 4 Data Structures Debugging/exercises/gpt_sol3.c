#include <stdio.h>

struct X
{
    short s; 
    int i; 
    char c;
};

struct Y
{
    int i;
    char c;
    short s;
};

struct Z
{
    int   i;
    short s;
    char  c;
};

int main() {
    printf("Padding in struct X: %zu\n", sizeof(struct X) - sizeof(short) - sizeof(int) - sizeof(char));
    printf("Padding in struct Y: %zu\n", sizeof(struct Y) - sizeof(int) - sizeof(char) - sizeof(short));
    printf("Padding in struct Z: %zu\n", sizeof(struct Z) - sizeof(int) - sizeof(short) - sizeof(char));

    return 0;
}
