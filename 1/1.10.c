#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
	if (ch == '\t' || ch == '\b' || ch == '\n' || ch == '\\')
	{
	    putchar('\\');
	    if (ch == '\t')
		putchar('t');
	    else if (ch == '\n')
		putchar('n');
	    else if (ch == '\b')
		putchar('b');
	    else
		putchar('\\');
	}
	else
	{
	    putchar(ch);
	}
    }

    return EXIT_SUCCESS;
}
