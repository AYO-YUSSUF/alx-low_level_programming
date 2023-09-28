#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little
*/
int get_endianness(void)
{
        int x;
        char *c;

        x = 1;
        c = (char *)&i;

        return (*c);
}

