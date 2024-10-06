 #include<stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: \n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
               isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
