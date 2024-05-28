#include <stdio.h>

/* print kelvin, celsius and fahrenheit table */
int main() {
    int step = 10;

    printf("kelvin   celsius  fahrenheit\n");

    for (int kelvin = 300; kelvin >= 0; kelvin = kelvin - step) {
        float celsius = (float)kelvin - 273.15;
        float fahrenheit = (float)kelvin * 1.8 - 459.67;
        printf("%6d %9.2f %11.2f \n", kelvin, celsius, fahrenheit);
    }

    return 0;
}
