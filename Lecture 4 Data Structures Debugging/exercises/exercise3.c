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

typedef enum {
    struct_X,
    struct_Y,
    struct_Z
} TYPE;

unsigned get_padding(TYPE t)
{
    unsigned structSize, membersSize; 
    switch (t)
    {
    case struct_X:
        {
            struct X s;
            membersSize = sizeof(s.s) + sizeof(s.i) + sizeof(s.c);
            structSize = sizeof(s);
        }
        break;
    case struct_Y:
        {
            struct Y s;
            membersSize = sizeof(s.i) + sizeof(s.c) + sizeof(s.s);
            structSize = sizeof(s);
        }
        break;
    case struct_Z:
        {
            struct Z s;
            membersSize = sizeof(s.i) + sizeof(s.s) + sizeof(s.c);
            structSize = sizeof(s);
        }
        break;
    default:
        return -1;
    }
    return structSize - membersSize;
    
}

int main()
{
    printf("Padding in Struct X is %u\n", get_padding(struct_X));
    printf("Padding in Struct Y is %u\n", get_padding(struct_Y));
    printf("Padding in Struct Z is %u\n", get_padding(struct_Z));

    return 0;
}