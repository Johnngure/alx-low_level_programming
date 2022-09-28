#include "main.h"

/**
* _puts_recursion - print's a string followed by new line
* @s: string to be printed
*
* Return: Void
*/
void _puts_recursion(char *s)
{
        if (*s == '\0')
        {
                _putchar('\n');
        }
        else
        {
               _putchar(s[0]);
               _put_recursion(s + 1);
        }
}
