#include "main.h"

char *_strncat(char *dest, const char *src, int n)
{
    char *dest_ptr = dest;
    int dest_len = 0;
    while (*dest_ptr != '\0')
    {
        dest_ptr++;
        dest_len++;
    }
    while (*src != '\0' && n > 0)
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    *dest_ptr = '\0';

    return dest;
}
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}
