#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriotion:  prints all possible combinations of single-digit numbers
 *
 * Return: Alaws 0 (success)
*/

int main(void)

{

int n;


for (n = 48; n < 58; n++)

{

putchar(n);

if (n != 57)

{

putchar(',');

putchar(' ');

}

}

putchar('\n');

return (0);

}

