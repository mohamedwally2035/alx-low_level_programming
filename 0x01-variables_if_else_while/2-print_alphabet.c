#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriotion: print all alphabet letters
 *
 * Return: Alaws 0 (success)
*/

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchr(ch);
ch++;

}
putchar('\n');

return (0);
}
