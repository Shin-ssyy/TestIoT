#include <stdio.h>

int main() {
    double c, f;
    printf("C : ");
    scanf("%lf", &c);
    f = (double)9 / 5 * c + 32;
    printf("Conversion to F : %.2lf\n", f);
    return 0;
}
