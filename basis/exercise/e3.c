/**
 * @Author ZhangGJ
 * @Date 2021/01/10 09:36
 */

#include <stdio.h>

int main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0f / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
