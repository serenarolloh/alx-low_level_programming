#include "main.h"

/**
 * main -calls the function to print string
 *
 * Return: Always 0

 */
void _puts_recursion(char *s)
{
    if (*s != '\0') {
        putchar(*s);
        _puts_recursion(s + 1);
    } else {
        putchar('\n');
    }
}

int main(void)
{
    _puts_recursion("First solve the problem, then write the code");
    return 0;
}
