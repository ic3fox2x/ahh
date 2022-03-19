#include <stdio.h>

int main()
{
    int celsius, fahrenheit;
    float initialx = 1.8;
    int term = 32;
    printf("How many celsius? \n");
    scanf("%d", &celsius);
    fahrenheit = celsius * initialx + term;
    printf("Total fahrenheit for me its hot. %d", fahrenheit);
    return 0;
}