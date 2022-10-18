#include<unistd.h>

void _putchar(char *str)
{
	int n;
	int len = 0;
	for (n = 0; str[n] != '\0'; n++)
		len++;
	write(1,str,len);
}
