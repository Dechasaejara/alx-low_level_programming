#include "main.h"

/**
 * _isalpha - check the code
 *
 * Return: Always 0.
 * @c: character to test.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
        return (0);
}
