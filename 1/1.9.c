#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    char prev = '\0';
    while ((ch = getchar()) != EOF)
    {
	if (ch != ' ' || prev != ' ')
	    putchar(ch);
	prev = ch;
    }

    return EXIT_SUCCESS;
}
