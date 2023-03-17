#include <stdio.h>
/**
 * main - This will print lower case then upper case 
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;
	int j;
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 0;i < 26;i++)
	{
		putchar(lower[i]);
	}
	for (j = 0; j < 26;j++)
	{
		putchar(upper[j]);
	}
	putchar('\n');
	return (0);
}
