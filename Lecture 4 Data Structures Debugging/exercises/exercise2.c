#include <stdio.h>

typedef union
{
    struct 
    {
        char byte1;
        char byte2;
        char byte3;
        char byte4;
    } bytes;
    int integer;
} DATA;


int main()
{
    DATA data;
    printf("Enter a 32 bit integer: ");
    scanf("%d", &data.integer);

    printf("Bytes of integer are:\n");

    printf("%x ", data.bytes.byte1);
    printf("%x ", data.bytes.byte2);
    printf("%x ", data.bytes.byte3);
    printf("%x ", data.bytes.byte4);
    

    return 0;
}