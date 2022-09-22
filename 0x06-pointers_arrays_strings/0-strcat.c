#include "main.h"
  
/**                                                                                                                           
 * _strncat - Concatenates two strings using at most                                                                           
 *            an inputted number of bytes from src.                                                                     
 * @dest: The string to be appended upon.                                                                                      
 * @src: The string to be appended to dest.                                                                                    
 * @n: The number of bytes from src to be appended to dest.                                                                 
 * Return: A pointer to the resulting string dest.                                                                              */
char *_strncat(char *dest, char *src, int n)                                                                                   
{
  int len = 0, i;

  while (dest[len])
      len++;

  for (i = 0; src[i] != ‘\0’; i++)
    {
      dest[len] = src[i];
      len += 1;
    }
   dest[len] = ‘\0’;                                                                         
   return (dest);                                                                                                              }


