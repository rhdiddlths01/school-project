#include <stdio.h>
#define gravity 9.8

int main()
{
    float s = 0;
    float velocity = 0;
    int time = 0;

    scanf("%d", &time);

    velocity = gravity * time;
    s = 0.5 * gravity * time * time;

    printf("%d초 뒤의 순간속도 : %.2f\t낙하거리 : %.2f\t", time, velocity, s);
    return 0;
}