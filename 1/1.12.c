#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    char prev = ' ';
    while ((ch = getchar()) != EOF)
    {
	if (ch == ' ' || ch == '\t') 
	{
	    if (prev != ' ' && prev != '\t') 
		putchar('\n');
	}
	else
	{
	    putchar(ch);
	}

	prev = ch;
    }

    return EXIT_SUCCESS;
}
