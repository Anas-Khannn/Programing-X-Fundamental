#include <stdio.h>

int getSeconds() {
    int s;
    printf("Enter seconds: ");
    scanf("%d", &s);
    return s;
}

void convertTime(int t, int *h, int *m, int *s) {
    *h = t / 3600;
    *m = (t % 3600) / 60;
    *s = t % 60;
}

int main() {
    int t, h, m, s;
    t = getSeconds();
    convertTime(t, &h, &m, &s);
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
