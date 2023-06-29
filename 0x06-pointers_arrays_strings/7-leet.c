#include "main.h"
/**
 * leet - encode into 1337speak
 * @c: input value
 *
 * Description: des.
 *
 * Return: c value
 */
char *leet(char *c)
{
	int i, j;
	char* s1;
 
	s1 = "aAeEoOtTlL";

	char* s2;
	
	s2 = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
			}
		}
	}
	return (c);
}
