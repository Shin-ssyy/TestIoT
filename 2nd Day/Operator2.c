#include <stdio.h>

int main() {
    char ch1 = 127, ch2 = 128, ch3 = -128, ch4 = -129;

    printf("%d %d %d %d", ch1, ch2, ch3, ch4);

    int num1 = 2, num2 = 4, num3 = 6;
    num1 = num1 + 3;
    printf("%d\n", num1);
    num1 += 3;
    printf("%d\n", num1);
    num2 *= num2;
    printf("%d\n", num2);
    

    return 0;
}
