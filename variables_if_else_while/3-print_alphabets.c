#include <stdio.h>
/**
* main - prints alphabet lower
* Return: 0
*/

int main(void)
{
char ALPH[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;

while (i < 53)
{
i++;
putchar(ALPH[i]);
}

putchar('\n');

return (0);
}

