#include <stdio.h>

int get_endianness(void);

int main(void) {
    if (get_endianness())
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}

int get_endianness(void) {
    int n = 1;

    char* c = (char*)& n;

    return (int)* c;
}

