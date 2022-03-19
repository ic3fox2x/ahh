#include <stdio.h>

int main()
{
    float principle, rate, years;
    float initialx;
    printf("whats the damn principle?\n");
    scanf("%f", &principle);
    printf("whats the damn rate?\n");
    scanf("%f", &rate);
    printf("whats the damn years?\n");
    scanf("%f", &years);
    initialx = principle * rate * years / 100;
    printf("Your Simple Interest is %f", initialx);
    return 0;
}