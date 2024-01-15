#include <main.h>

void _puts_recursion(char *s)
{
while (*s != '\0') 
{
putchar(*s);
s++;
}
putchar('\n');
}

