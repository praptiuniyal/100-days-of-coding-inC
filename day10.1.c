// Q19: Triangle Type
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
    return 0;
}