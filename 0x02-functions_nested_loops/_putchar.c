#include <unistd.h>

/**
 * _putchar - writes a character to output
 *  
 * Return on success 1
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}		
