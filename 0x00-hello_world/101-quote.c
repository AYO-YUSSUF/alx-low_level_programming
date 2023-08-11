#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints using write function
 *       write(int fd,const void *buf,size_t count
 * Return: 1 (error)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
return (1);
}
