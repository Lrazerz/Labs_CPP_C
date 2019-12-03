#include <stdio.h>

float sqr(float num);

int main()
{
    printf("square of %.2f is %.2f\n", 2.0f, sqr(2));
    printf("square of %.2f is %.2f\n", 6.0f, sqr(6));
    printf("square of %.2f is %.2f\n", 2.5f, sqr(2.5));
    printf("square of %.2f is %.2f\n", 12.12f, sqr(12.12));
    printf("square of %.2f is %.2f\n", 345.68f, sqr(345.68));
    return 0;
}

float sqr(float num)
{
    return num * num;
}