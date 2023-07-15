#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriotion: prints the lowercase alphabet in reverse,
 *
 * Return: Alaws 0 (success)
*/

int main(void)

{

char ch;


for (ch = 'z'; ch >= 'a'; ch--)

{

putchar(ch);

}

putchar('\n');

return (0);

}
