// Q27: Sum of first n odd numbers
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1, count = 0; count < n; i += 2, count++)
        sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}