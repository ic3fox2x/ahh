#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter your physics marks?\n");
    scanf("%d", &physics);
    printf("Enter your maths marks?\n");
    scanf("%d", &maths);
    printf("Enter your chemistry marks?\n");
    scanf("%d", &chemistry);
    total = (physics + chemistry + maths)/3;
    if((total<40) || maths<33 || physics<33 || chemistry<33 ){
        printf("Your total percentage is %f and you've failed!", total);
    }
    else{
        printf("Your total percentage is %f and you've passed!", total);
    }
    return 0;
}