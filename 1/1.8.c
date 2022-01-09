#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t space_count = 0;
    size_t tab_count   = 0;
    size_t nline_count = 0;

    char ch;
    while ((ch = getchar()) != EOF)
    {
	if (ch == '\n')
	    nline_count++;
	if (ch == '\t')
	    tab_count++;
	if (ch == ' ')
	    space_count++;
    }

    printf("tab = %zu\nspace = %zu\nnewline = %zu\n", tab_count, space_count, nline_count);

    return EXIT_SUCCESS;
}
