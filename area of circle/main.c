#include<stdio.h>

int main(){
    int radius;
    float pie = 3.14;
    printf("whats the damn radius? \n");
    scanf("%d", &radius);
    printf("The area of circle is %f", pie*radius*radius);
    return 0;
}