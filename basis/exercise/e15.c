/**
 * @Author ZhangGJ
 * @Date 2021/01/12 23:51
 */
#include <stdio.h>

float celsius(float fahr);

int main() {
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }
}

float celsius(float fahr) {
    return (5.0f / 9.0f) * (fahr - 32.0);
}
