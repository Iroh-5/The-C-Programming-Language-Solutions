#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("From Fahrenheit to Celsius");

    const int lower = 0;
    const int upper = 300;
    const int step  = 20;

    float fahr = lower;
    while (fahr <= upper)
    {
	float celsius = (5.0f / 9.0f) * (fahr - 32.0f);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr += step;
    }

    return EXIT_SUCCESS;
}
