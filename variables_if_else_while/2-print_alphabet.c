#include <stdio.h>
/**
* main - prints alphabet lower
* Return: 0
*/

int main(void)
{
char ALPH[27] = "aabcdefghijklmnopqrstuvwxyz";
int i = 0;

while (i < 26)
{
i++;
putchar(ALPH[i]);
}

putchar('\n');

return (0);
}
