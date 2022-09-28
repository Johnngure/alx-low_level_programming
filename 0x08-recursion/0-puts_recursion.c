#include "main.h" 

/**
 *_puts_recursion - put's a stringfollowed by a new line
 *@s: string to be printed
 *
 * Return: void
 */ 
void _puts_recursion(char *s)
{
        if (*s == '\0');
        {
                _putchar('\n');
        }
        else
        {
               putchar([0]);
               put_recursion(s + 1);
        }
}
