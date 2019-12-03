#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num > 6 || num < 0)
    {
        printf("Error, no such day.");
        return 0;
    }
    
    char *week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Pointer version: ");
    for(char *c = week[num]; *c != '\0'; c++)
        printf("%c", *c);

    printf("\nArray index version: ");
    for(int i = 0; week[num][i] != '\0'; i++)
        printf("%c", week[num][i]);
    printf("\n");

    return 0;
}