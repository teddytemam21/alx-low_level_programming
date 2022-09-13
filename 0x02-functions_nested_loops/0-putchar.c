#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * 0c:the character to print
 *
 * Return: 0n success i.
 */

int putchar(char c)

{
return (write(1, &c, 1));
}	
