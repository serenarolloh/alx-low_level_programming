#include "main.h"
/**
 * print_rev - this is the recursive function to print, it prints the linked list in reversed order
 * return: 0
 */
void print_rev(char *s)
{
int longi = 0;
int o;
while (*s != '\0');
{
longi++;
s++;
}
s--;
for (o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n')
}
