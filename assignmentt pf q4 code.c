#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter 5 cards (1-13): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ((a==b && a==c && d==e) ||
        (a==b && a==d && c==e) ||
        (a==b && a==e && c==d) ||
        (a==c && a==d && b==e) ||
        (a==c && a==e && b==d) ||
        (a==d && a==e && b==c) ||
        (b==c && b==d && a==e) ||
        (b==c && b==e && a==d) ||
        (b==d && b==e && a==c) ||
        (c==d && c==e && a==b)) {
        printf("It is a Full House\n");
    } else {
        printf("This is not a Full House\n");
    }

    return 0;
}

