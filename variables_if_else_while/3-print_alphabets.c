#include <stdio.h>
/**
* main - prints alphabet lower
* Return: 0
*/

int main(void)
{
char ALPH[54] = "aabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;

while (i < 54)
{
i++;
putchar(ALPH[i]);
}

putchar('\n');

return (0);
}

