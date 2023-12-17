/*#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);


    for (int i = 1; i < n; i++) {

        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }

    printf(" liczb mniejszych od %d, podzielnych przez 5 i niepodzielnych przez 3: %d\n", n, count);

    return 0;
}
 */

#include <stdio.h>


double horner(double coef[], int n, double x) {
    if (n == 0) {
        return coef[0];
    }
    return coef[n] + x * horner(coef, n - 1, x);
}

int main() {
    int n, i;
    double x, coef[100];

    printf("Podaj stopien wielomianu (maks. 99): ");
    scanf("%d", &n);

    printf("Podaj wspolczynniki wielomianu (od najwyzszej potegi do stalej): \n");
    for (i = n; i >= 0; i--) {
        printf("x^%d: ", i);
        scanf("%lf", &coef[i]);
    }

    printf("Podaj wartosc argumentu x: ");
    scanf("%lf", &x);


    double result = horner(coef, n, x);
    printf("Wartosc wielomianu dla x = %.2lf wynosi: %.2lf\n", x, result);

    return 0;
}