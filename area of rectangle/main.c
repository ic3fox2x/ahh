#include <stdio.h>

int main()
{
    int width, height, area;
    printf("whats the damn width?\n");
    scanf("%d", &width);
    printf("whats the damn height?\n");
    scanf("%d", &height);
    area = width*height;
    printf("The area of rectangle is %d", area);
    return 0;
}