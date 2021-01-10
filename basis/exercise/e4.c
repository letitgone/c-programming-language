/**
 * @Author ZhangGJ
 * @Date 2021/01/10 09:38
 */
#include <stdio.h>

int main() {
    float celsius;
    float fahr;

    int step = 20;
    int lower = 0;
    int upper = 300;

    printf("Celsius Fahr\n");
    while (celsius <= upper) {
        fahr = celsius * 9.0f / 5.0f + 32.0f;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
