 #include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a is the greatest: %d\n", a);
    } else if (b > a && b > c) {
        printf("b is the greatest: %d\n", b);
    } else if (c > a && c > b) {
        printf("c is the greatest: %d\n", c);
    } else {
        printf("There is a tie among the greatest values.\n");
    }

    return 0;
}
