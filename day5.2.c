// Q10: Convert seconds to hh:mm:ss
#include <stdio.h>
int main() {
    int sec, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;
    printf("Time = %02d:%02d:%02d\n", h, m, s);
    return 0;
}