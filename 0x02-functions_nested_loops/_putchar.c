#include<unistd.h>

void _putchar(char str)
{
       write(1,&str,1);
}
