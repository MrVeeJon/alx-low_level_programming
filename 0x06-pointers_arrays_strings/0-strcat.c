#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;
    while (*dest_ptr != '\0')
    {
        dest_ptr++;
    }
    while (*src != '\0')
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }
    *dest_ptr = '\0';
    return dest;
}
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}
