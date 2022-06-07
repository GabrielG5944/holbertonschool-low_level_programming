#include <stdio.h>
/**
* main - prints alphabet lower
* Return: 0
*/

int main(void)
{
char ALPH[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(ALPH[i]);
}

putchar('\n');

return (0);
}

