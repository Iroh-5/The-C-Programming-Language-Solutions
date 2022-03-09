#include <stdio.h>
#include <stdlib.h>

/*
 * NOTE: This program is probably not portable because it relies on the fact
 *       that ASCII coding is used
 */

enum
{ 
    CHAR_COUNT = 95, // 32..126 
    OFFSET = 32,
    WIDTH = 110 
};

int main(void)
{
    int cnt[CHAR_COUNT] = {0};

    char ch;
    while ((ch = getchar()) != EOF)
	cnt[ch - OFFSET]++;

    int mxcnt = -1;
    for (int i = 0; i < CHAR_COUNT; ++i)
	if (cnt[i] > mxcnt)
	    mxcnt = cnt[i];

    for (int i = 0; i < CHAR_COUNT; ++i)
    {
	printf("%c: ", i + OFFSET);

	int len = ((float)cnt[i] / mxcnt) * WIDTH;
	while (len-- > 0)
	    putchar('*');
	putchar('\n');
    }

    return EXIT_SUCCESS;
}
