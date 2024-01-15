#include "main.h"

void _puts_recursion(char *s)
/** 
 *main - run the function to print the string
 *
 * Return: Always 0
 */
{
while (*s != '\0') 
{
putchar(*s);
s++;
}
putchar('\n');
}
 int main(void){
   _puts_recursion("I am an ALX student");
 return (0);
}

