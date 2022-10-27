#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: string to be encoded
 * Return: str
 */

char *rot13(char *str)
{
	char character[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			       'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
			       'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
			       'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char rot_enc[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			     'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
			     'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			     'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
			     'v', 'w', 'x', 'y', 'z', 'a', 'b',
			     'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == character[j])
			{
				str[i] = rot_enc[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
