#include <stdio.h>

int main()
{
    int radius, height;
    float pie = 3.14;
    int volume;
    printf("whats the damn radius?\n");
    scanf("%d", &radius);
    printf("whats the damn height?\n");
    scanf("%d", &height);
    volume = pie * radius * radius * height;
    printf("The volume of cyclinder %d", volume);
    return 0;
}