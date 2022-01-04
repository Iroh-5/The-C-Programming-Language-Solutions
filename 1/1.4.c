#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("From Celsius to Fahrenheit");

    const int lower = -100;
    const int upper = 100;
    const int step  = 20;

    float celsius = lower;
    while (celsius <= upper)
    {
	float fahr = (9.0f / 5.0f) * celsius + 32.0f;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius += step;
    }

    return EXIT_SUCCESS;
}
